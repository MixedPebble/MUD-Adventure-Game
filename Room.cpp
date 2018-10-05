#include "Room.h"
#include "Creature.h"
Room::Room(int i){
    roomNumber = i;
    neighbors[0]=NULL;
    neighbors[1]=NULL;
    neighbors[2]=NULL;
    neighbors[3]=NULL;
    
}


void Room::inspect(){
    cout<<"Room "<<roomNumber<<",";
    if(roomState==0){
    //clean
    cout<<"clean";
    }
    else if(roomState==1){
    cout<<"half-dirty";
    }
    else if(roomState==2){
        //dirty
        cout<<"dirty,";
    }
        cout<<"neighbors";
        for(int i =0;i<4;i++){
            if (neighbors[i]!=NULL){
                cout<<neighbors[i]->roomNumber;
                if (i == 0){
                    cout<<" to the north ";
                }
                if (i == 1){
                    cout<<" to the south ";
                    
                }
                if (i == 2){
                    cout<<" to the east ";
                    
                }
                if (i == 3){
                    cout<<" to the west ";
                    
                }
            }   
        }
        vector<Creature*>::iterator p;
        cout<<"contains:"<<endl;
        for (vector<Creature*>::iterator i = residents.begin(); i != residents.end(); ++i) {
            (*i)->info();
        }
        
    
}