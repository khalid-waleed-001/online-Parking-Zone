#include "Zone.h"

Zone::Zone() {
    zoneID = -1;
}

Zone::Zone(int id, int slots) {
    zoneID = id;
    area = ParkingArea(slots, id);
}

ParkingSlot* Zone::requestSlot() {
    return area.getFreeSlot();
}

int Zone::getZoneID() {
    return zoneID;
}

