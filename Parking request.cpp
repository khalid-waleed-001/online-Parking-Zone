#include "ParkingRequest.h"

ParkingRequest::ParkingRequest() {
    requestID = -1;
    vehicleID = -1;
    zoneID = -1;
    state = REQUESTED;
}

ParkingRequest::ParkingRequest(int rid, int vid, int zid) {
    requestID = rid;
    vehicleID = vid;
    zoneID = zid;
    state = REQUESTED;
}

bool ParkingRequest::transition(RequestState newState) {
    if (state == REQUESTED &&
       (newState == ALLOCATED || newState == CANCELLED)) {
        state = newState;
        return true;
    }
    if (state == ALLOCATED &&
       (newState == OCCUPIED || newState == CANCELLED)) {
        state = newState;
        return true;
    }
    if (state == OCCUPIED && newState == RELEASED) {
        state = newState;
        return true;
    }
    return false;
}

int ParkingRequest::getRequestID() { return requestID; }
int ParkingRequest::getVehicleID() { return vehicleID; }
int ParkingRequest::getZoneID() { return zoneID; }
RequestState ParkingRequest::getState() { return state; }

