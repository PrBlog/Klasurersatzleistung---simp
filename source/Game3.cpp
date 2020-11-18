#include <iostream>
#include <stdlib.h>
#include "../include/player.hpp"
#include "../include/area.hpp"
#include "../include/interactables.hpp"
#include "../include/ini.hpp"

using namespace std;



void game() {
    cout << " Game 3 working" << endl;
    unsigned short gamestate;
    gamestate = 0;
    //string pause;
    //cin >> pause;
    //the following 10 lines should be area-specific, therefor included in the area
    //char pname[50]; //PC name, string length should be dynamic
    //char fname[50]; //Main NPC name, string length should be dynamic
    string friendname;
    string playername;
    cout << "What is your name, friend?\n" << endl;
    cin >> playername; 
    
    player playerobj{playername};
    cout << "Name: " << playerobj.getname() << endl;
    
    cout << "\nYou hear a strange noise. The next thing you know, there's a voice in your head. It's your best Friend!" << endl;
    cout << "\nWhat was his name again?" << endl;
    cin >> friendname;
    cout << friendname << ": " << playername << ", is that you? I found this strange spell that lets me talk to you." << endl; 
    cout << "\nYou look around the room, see if somebody else has heard the sound" << endl;

    //area initializing test

    cavern();

    //interactible initializing test
    interactable key{"bronze key", "tavern", "This is a rusty old key"};
    cout << "\nYou find a " << key.getname() << " inside the jar" << endl;

}