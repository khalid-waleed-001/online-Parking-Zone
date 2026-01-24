#ifndef PARKINGSYSTEM_H
#define PARKINGSYSTEM_H

#include "Zone.h"
#include "Vehicle.h"
#include "ParkingRequest.h"
#include "AllocationEngine.h"

class ParkingSystem {
private:
    Zone* zones;
    int zoneCount;
    RollbackManager rollback;

public:
    ParkingSystem(int zcount);
    void addZone(int index, int zoneID, int slots);
    void parkVehicle(Vehicle v);
    void cancelLast();
};

#endif

