#include "Vehicle.h"

Vehicle::Vehicle() {
    vehicleID = -1;
    preferredZone = -1;
}

Vehicle::Vehicle(int id, int zone) {
    vehicleID = id;
    preferredZone = zone;
}

int Vehicle::getVehicleID() {
    return vehicleID;
}

int Vehicle::getPreferredZone() {
    return preferredZone;
}

