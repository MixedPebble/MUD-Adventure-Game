#include "Creature.h"
#include "Animal.h"
#include "Npc.h"
#include "PC.h"
#include <iostream>
using namespace std;

#include "Room.h"
//#include "Creature.h"
//#include "Animal.h"

int main()
{
    
    int num,numOfCreat;
    int roomState, North, South, East, West, CreatureType, Location;
    Creature* player= NULL;




    cout <<"Enter the number of rooms: "<<std::endl;
    cin >> num;

    Room* rooms[num];
    for(int i = 0;i<num;i++){
        rooms[i] = new Room(i);
    }
    for(int i = 0;i<num;i++){
        cout <<"Enter Room " <<i<< " info:"<<endl;
        //State,North,South,East,West
        cin >>roomState>>North>>South>>East>>West;
        if (North !=-1){
            rooms[i]->neighbors[0]=rooms[North];
            rooms[i]->roomState=roomState;
        }
        if (South !=-1){
            rooms[i]->neighbors[1]=rooms[South];
            rooms[i]->roomState=roomState;
            
        }
        if (East !=-1){
            rooms[i]->neighbors[2]=rooms[East];
            rooms[i]->roomState=roomState;
            
        }
        if (West !=-1){
            rooms[i]->neighbors[3]=rooms[West];
            rooms[i]->roomState=roomState;
            
        }
    }



    cout <<"Enter the number of creatures: "<<endl;
    cin >> numOfCreat;
    for(int i = 0;i<numOfCreat;i++){
        cout <<"Enter creature " <<i<< " info:"<<endl;
        
        cin >>CreatureType>>Location;
        if(CreatureType==0){
            //PC
            player = new PC();
            rooms[Location]->residents.push_back(player);
            rooms[Location]->residents.back()->currentRoom=rooms[Location];
            //player=rooms[i]->residents.back();
            
        }
        if(CreatureType==1){
            //Animal
            rooms[Location]->residents.push_back(new Animal());
        }
        if(CreatureType==2){
            //NPC
            rooms[Location]->residents.push_back(new Npc());
            
        }
        
    }

    //cout<<player->currentRoom->roomState<<endl;
    //cout<<player->pref<<endl;
    
    //Looks through all rooms and creatures. Prints everything in order.
cout <<"Rooms: "<<endl;
for(int i =0;i<num;i++){
    vector<Creature*>::iterator iter, end;
    cout<<"    Room: " <<i<<endl;
        cout <<"    roomstate: "<<rooms[i]->roomState<<endl;
        cout <<"    Creatures: "<<endl;
        
        for(iter = rooms[i]->residents.begin(), end = rooms[i]->residents.end() ; iter < end; ++iter) {
            cout<<"         "<<(*iter)->pref<<endl;
    }    
}
string command;
cout<<"Please enter a command"<<endl;

cin>>command;
while(command!="exit"){
    if(command=="look"){
       player->look();
       cout<<""<<endl;
       
    }  else if (command =="north"){
        player->move("north");
    } else if (command =="south"){
        player->move("south");
    } else if (command =="east"){
        player->move("east");
    } else if (command =="west"){
        player->move("west");
    } else if (command =="clean"){
        player->clean();
        for(int i =0;i<player->currentRoom->residents.size();i++){
            if(player->currentRoom->residents[i]->pref==1){
                //player->currentRoom->residents[i].lickFace();
                //player->++respect;
            }
        }
    } else if (command =="dirty"){
        player->dirty();
        for(int i =0;i<player->currentRoom->residents.size();i++){
            if(player->currentRoom->residents[i]->pref==1){
                //player->currentRoom->residents[i].lickFace();
                //player->respect++;
            }
        }
    }else {
        cout<<"You typed an incorrect command"<<endl;
    }
    cout<<"Please enter a command"<<endl;    
    cin>>command;
    
    
}


cout<<"Goodbye!"<<endl;
return 0;

}



