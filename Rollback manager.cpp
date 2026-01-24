#include "RollbackManager.h"

RollbackManager::RollbackManager() {
    top = nullptr;
}

void RollbackManager::push(ParkingSlot* slot) {
    RollNode* n = new RollNode;
    n->slot = slot;
    n->next = top;
    top = n;
}

ParkingSlot* RollbackManager::rollback() {
    if (!top) return nullptr;
    ParkingSlot* s = top->slot;
    RollNode* temp = top;
    top = top->next;
    delete temp;
    return s;
}

