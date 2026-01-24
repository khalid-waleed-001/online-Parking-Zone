#include "Allocation engine.h"

ParkingSlot* AllocationEngine::allocate(
    Zone* zones, int count,
    int preferredZone,
    RollbackManager& rb) {

    // Same zone first
    for (int i = 0; i < count; i++) {
        if (zones[i].getZoneID() == preferredZone) {
            ParkingSlot* s = zones[i].requestSlot();
            if (s) {
                s->occupy();
                rb.push(s);
                return s;
            }
        }
    }

    // Cross-zone allocation
    for (int i = 0; i < count; i++) {
        ParkingSlot* s = zones[i].requestSlot();
        if (s) {
            s->occupy();
            rb.push(s);
            return s;
        }
    }
    return nullptr;
}


