#ifndef ALLOCATIONENGINE_H
#define ALLOCATIONENGINE_H

#include "Zone.h"
#include "RollbackManager.h"

class AllocationEngine {
public:
    static ParkingSlot* allocate(Zone* zones, int count,
                                 int preferredZone,
                                 RollbackManager& rb);
};

#endif

