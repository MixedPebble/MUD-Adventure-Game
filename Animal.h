#ifndef ANIMAL_H
#define ANIMAL_H
#include "Creature.h"

class Animal: public Creature
{
    public:
        Animal();
        void growl();
        void lickFace();
    protected:
    private:
};
#endif 
