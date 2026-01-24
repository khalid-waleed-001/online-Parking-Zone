#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
private:
    int vehicleID;
    int preferredZone;

public:
    Vehicle();
    Vehicle(int id, int zone);

    int getVehicleID();
    int getPreferredZone();
};

#endif

