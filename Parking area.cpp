#include "ParkingArea.h"

ParkingArea::ParkingArea() {
    slots = nullptr;
    capacity = 0;
}

ParkingArea::ParkingArea(int cap, int zoneID) {
    capacity = cap;
    slots = new ParkingSlot[capacity];
    for (int i = 0; i < capacity; i++) {
        slots[i] = ParkingSlot(i + 1, zoneID);
    }
}

ParkingSlot* ParkingArea::getFreeSlot() {
    for (int i = 0; i < capacity; i++) {
        if (slots[i].isAvailable())
            return &slots[i];
    }
    return nullptr;
}
