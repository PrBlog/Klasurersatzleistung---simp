#include <iostream>
#include <stdlib.h>
#include <string>
#include "../include/player.hpp"
#include "../include/area.hpp"
#include "../include/interactables.hpp"
#include "../include/ini.hpp"
#include "../include/Items.hpp"
using namespace std;



void game() {
    unsigned short gamestate;
    gamestate = 0;


    Items* allitems[20];
    area* allareas[20];
    
    // Items initialization
    allitems[0] = new Items {"bronze key", 2, "This is a rusty old key", 0};
    allitems[2] = new Items {"a few coins", 2, "A handful of worn out coins, lost by someone less fortunate than you, apparently", 0};

        
        // area initialization
    //unsigned short cavadj[5] = {0, 0, 0, 0};
    //allareas[0] = new area {"unknown location", "no description available", cavadj[5]};
    allareas[0] = new area {"unknown location", "no description available"};
    
    allareas[1] = new area {"Inventory", "This is where you find your belongings."};
    
    //cavadj[] = {3, 0, 0, 0}; //set adjacencies for Orchids Cellar
    allareas[2] = new area {"Orchids Cellar", "A musty, dark cellar sealed with a heavy wooden door that belongs to Orchid, the Innkeeper. Besides you there's only a old man cowering in a corner of the basement. Most of the floor is covered with a dusty rug."};
    
    //cavadj[] = {2, 4, 0, 0}; //set adjacencies for Orchids Tavern
    allareas[3] = new area {"Orchids Tavern", "A rustic, currently occupied cavern sealed with a heavy wooden door."};


    string playername;
    int loc;

    cout << "What is your name, my friend?" << endl;
    cin >> playername;
    
    //initialize Player Character
    player playerobj{playername};
    
    cout << "Welcome, " << playerobj.getname() << ". I hope you will not stay for long" << endl;
    playerobj.setlocation(2);
    
    while (playerobj.getlocation() != 20){
        switch(playerobj.getlocation()){
            case 2:
            //code
            cout << "I am in location 2" << endl;
            allareas[2]->visit();
            cout << "Please enter where you want to go!" << endl;
            cin >> loc;
            
            playerobj.setlocation(loc);

            break;

            case 3:
            //code
            break;
        }
    }
cout << "You won!" << endl;





    
}