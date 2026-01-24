#ifndef PARKINGREQUEST_H
#define PARKINGREQUEST_H

enum RequestState {
    REQUESTED,
    ALLOCATED,
    OCCUPIED,
    RELEASED,
    CANCELLED
};

class ParkingRequest {
private:
    int requestID;
    int vehicleID;
    int zoneID;
    RequestState state;

public:
    ParkingRequest();
    ParkingRequest(int rid, int vid, int zid);

    bool transition(RequestState newState);

    int getRequestID();
    int getVehicleID();
    int getZoneID();
    RequestState getState();
};

#endif

