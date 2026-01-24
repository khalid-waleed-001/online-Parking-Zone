#ifndef ROLLBACKMANAGER_H
#define ROLLBACKMANAGER_H

#include "ParkingSlot.h"

struct RollNode {
    ParkingSlot* slot;
    RollNode* next;
};

class RollbackManager {
private:
    RollNode* top;

public:
    RollbackManager();
    void push(ParkingSlot* slot);
    ParkingSlot* rollback();
};

#endif

