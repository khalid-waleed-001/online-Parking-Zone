#ifndef ZONE_H
#define ZONE_H

#include "ParkingArea.h"

class Zone {
private:
    int zoneID;
    ParkingArea area;

public:
    Zone();
    Zone(int id, int slots);

    ParkingSlot* requestSlot();
    int getZoneID();
};

#endif
