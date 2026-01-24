#include "ParkingSlot.h"

ParkingSlot::ParkingSlot() {
    slotID = -1;
    zoneID = -1;
    available = true;
}

ParkingSlot::ParkingSlot(int sid, int zid) {
    slotID = sid;
    zoneID = zid;
    available = true;
}

bool ParkingSlot::isAvailable() {
    return available;
}

void ParkingSlot::occupy() {
    available = false;
}

void ParkingSlot::release() {
    available = true;
}

int ParkingSlot::getSlotID() {
    return slotID;
}

int ParkingSlot::getZoneID() {
    return zoneID;
}

