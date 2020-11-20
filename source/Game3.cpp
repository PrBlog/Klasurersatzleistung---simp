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

    // Items key1{"bronze key", "cellar", "This is a rusty old key", 0};
    // Items key2{"messing key", "tavern", "This is a rusty old key", 0};

    // Items* allitems[20];
    // allitems[0] = new Items {"bronze key", "cellar", "This is a rusty old key", 0};
    //allitems[1] = new Items {"messing key", "tavern", "This is a rusty old key", 0};

    //cout << allitems[0]->getname() << endl;

    // string friendname;
    // string playername;
    // cout << "What is your name, friend?" << endl;
    // cin >> playername; 
    
    // player playerobj{playername};
    // cout << "Name: " << playerobj.getname() << endl;

    // map initialization
    // unsigned short cavadj[] = {3, 0, 0, 0, 0};
    // area cellar{"a cellar", "A musty, dark cellar sealed with a heavy wooden door. Besides you there's only a old man cowering in a corner of the basement", cavadj};

    // unsigned short cavadj[] = {2, 4, 0, 0, 0};
    // area tavern{"a tavern", "A rustic, currently occupied cavern sealed with a heavy wooden door.", cavadj};
    
    // cout << "You hear a strange noise. The next thing you know, there's a voice in your head. It's your best Friend!" << endl;
    // cout << "What was his name again?" << endl;
    // cin >> friendname;
    
    //area initializing test

    //areatest();

    //npctest();

    
    itemtest();

// itemliste[q] = itempointer

// checkitems(area){
//     for (i <= 10, int i = 0, i++){ 
//         string itemlocation = itemliste[i].getarea();
//         if (area == itemlocation){
//             cout << itemliste[i].getname() << endl;
//         };
//     };
    
}