#include "Npc.h"
#include "Creature.h"

#include <iostream>

using namespace std;


Npc::Npc()
{
    pref=2;
    type="NPC";
}
void Npc::smile(){
    cout<<"NPC smiles"<<endl;
}

void Npc::grumble(){
    cout<<"NPC grumbles"<<endl;
}
