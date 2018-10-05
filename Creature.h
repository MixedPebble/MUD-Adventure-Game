#ifndef Creature_H
#define Creature_H
#include "Room.h"


class Creature
{
    public:
        Creature();
        int pref;
        string type;
        Room* currentRoom;
        void look();
        void clean();
        void dirty();
        void info();
        void move(string dir);

    private:
};
#endif
