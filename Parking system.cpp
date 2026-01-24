#include "ParkingSystem.h"
#include <iostream>

ParkingSystem::ParkingSystem(int zcount) {
    zoneCount = zcount;
    zones = new Zone[zcount];
}

void ParkingSystem::addZone(int index, int zoneID, int slots) {
    zones[index] = Zone(zoneID, slots);
}

void ParkingSystem::parkVehicle(Vehicle v) {
    ParkingSlot* slot =
        AllocationEngine::allocate(
            zones, zoneCount,
            v.getPreferredZone(),
            rollback);

    if (slot)
        std::cout << "Vehicle parked in Slot "
                  << slot->getSlotID()
                  << " Zone " << slot->getZoneID() << std::endl;
    else
        std::cout << "No slot available\n";
}

void ParkingSystem::cancelLast() {
    ParkingSlot* s = rollback.rollback();
    if (s) {
        s->release();
        std::cout << "Rollback successful\n";
    }
}

