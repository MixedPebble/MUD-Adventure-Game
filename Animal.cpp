#include "Animal.h"
#include "Creature.h"

#include <iostream>

using namespace std;


Animal::Animal()
{
    pref=1;
    type = "Animal";
}
void Animal::growl(){
    cout<<"Animal growls"<<endl;
}
void Animal::lickFace(){
    cout<<"Animal licksface"<<endl;
    
}

