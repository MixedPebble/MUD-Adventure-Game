#ifndef Room_H
#define Room_H
#include <iostream>
//#include "Creature.h"
#include <vector>
using namespace std;
class Creature;
class Room{
    public:
        Room(int i);
        void inspect();

        int roomState;
        int roomNumber;
        const static int MAX_NEIGHBOR_SIZE=4;
        const static int MAX_RESIDENT_SIZE=10;
        Room* neighbors[MAX_NEIGHBOR_SIZE];
        vector<Creature*> residents;
        //Creature* residents[MAX_RESIDENT_SIZE];

    private:  
};
#endif
