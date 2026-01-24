#ifndef PARKINGAREA_H
#define PARKINGAREA_H

#include "ParkingSlot.h"

class ParkingArea {
private:
    ParkingSlot* slots;
    int capacity;

public:
    ParkingArea();
    ParkingArea(int cap, int zoneID);

    ParkingSlot* getFreeSlot();
};

#endif
