#include <iostream>
#include <stdlib.h>
#include "../include/player.hpp"
#include "../include/area.hpp"
#include "../include/interactables.hpp"
#include "../include/ini.hpp"

using namespace std;



void game() {
    unsigned short gamestate;
    gamestate = 0;
    
    string friendname;
    string playername;
    cout << "What is your name, friend?" << endl;
    cin >> playername; 
    
    player playerobj{playername};
    cout << "Name: " << playerobj.getname() << endl;
    
    cout << "You hear a strange noise. The next thing you know, there's a voice in your head. It's your best Friend!" << endl;
    cout << "What was his name again?" << endl;
    cin >> friendname;
    
    //area initializing test

    //cavern();

    npctest();

    

}