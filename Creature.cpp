#include "Creature.h"

#include <iostream>

using namespace std;


Creature::Creature()
{
}


void Creature::look() {
    currentRoom->inspect();
}
void Creature::info(){
    cout<<type<<endl;
}

void Creature::clean(){
    if (currentRoom->roomState==0){
        cout<<"The room is already clean"<<endl;
    }
    if (currentRoom->roomState==1){
        currentRoom->roomState=0;
        cout<<"The room is now clean";
    }
    if (currentRoom->roomState==2){
        currentRoom->roomState=1;
        cout<<"The room is now half-dirty";
    }
}

void Creature::dirty(){
    //clean,half,dirty
    if (currentRoom->roomState==0){
        cout<<"The room is now half-dirty"<<endl;
    }
    if (currentRoom->roomState==1){
        currentRoom->roomState=0;
        cout<<"The room is now dirty";
    }
    if (currentRoom->roomState==2){
        currentRoom->roomState=1;
        cout<<"The room is now already dirty";
    }
}

void Creature::move(string dir){
    if(dir=="north"){
        if(currentRoom->neighbors[0]->residents.size()<10){

for(int i =0;i<currentRoom->residents.size();i++){
    if(currentRoom->residents[i]==this){
        currentRoom->residents.erase(currentRoom->residents.begin()+i);
    }
}
            currentRoom->neighbors[0]->residents.push_back(this);
            currentRoom = currentRoom->neighbors[0];
            cout<<"You leave towards the north"<<endl;
            
        } else{
            cout<<"This room is full"<<endl;
        }
    }


    else if(dir=="south"){
        if(currentRoom->neighbors[1]->residents.size()<10){

for(int i =0;i<currentRoom->residents.size();i++){
    if(currentRoom->residents[i]==this){
        currentRoom->residents.erase(currentRoom->residents.begin()+i);
    }
}
            currentRoom->neighbors[1]->residents.push_back(this);
            currentRoom = currentRoom->neighbors[1];
            cout<<"You leave towards the south"<<endl;
            
        } else{
            cout<<"This room is full"<<endl;
        }
    }



    else if(dir=="east"){
        if(currentRoom->neighbors[2]->residents.size()<10){

for(int i =0;i<currentRoom->residents.size();i++){
    if(currentRoom->residents[i]==this){
        currentRoom->residents.erase(currentRoom->residents.begin()+i);
    }
}
            currentRoom->neighbors[2]->residents.push_back(this);
            currentRoom = currentRoom->neighbors[2];
            cout<<"You leave towards the east"<<endl;
            
        } else{
            cout<<"This room is full"<<endl;
        }
    }


    else if(dir=="west"){
        if(currentRoom->neighbors[3]->residents.size()<10){

for(int i =0;i<currentRoom->residents.size();i++){
    if(currentRoom->residents[i]==this){
        currentRoom->residents.erase(currentRoom->residents.begin()+i);
    }
}
            currentRoom->neighbors[3]->residents.push_back(this);
            currentRoom = currentRoom->neighbors[3];
            cout<<"You leave towards the west"<<endl;
        } else{
            cout<<"This room is full"<<endl;
        }
    }

}

