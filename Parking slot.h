#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

class ParkingSlot {
private:
    int slotID;
    int zoneID;
    bool available;

public:
    ParkingSlot();
    ParkingSlot(int sid, int zid);

    bool isAvailable();
    void occupy();
    void release();

    int getSlotID();
    int getZoneID();
};

#endif

