#include "ParkingSystem.h"

int main() {
    ParkingSystem system(2);

    system.addZone(0, 1, 2);
    system.addZone(1, 2, 2);

    Vehicle v1(101, 1);
    Vehicle v2(102, 1);
    Vehicle v3(103, 1);

    system.parkVehicle(v1);
    system.parkVehicle(v2);
    system.parkVehicle(v3);

    system.cancelLast();

    return 0;
}
