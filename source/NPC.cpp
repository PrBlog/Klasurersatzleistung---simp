#include "../include/NPC.hpp"
#include <iostream>
#include <stdlib.h>
#include <fstream>


using namespace std;

//ctor
NPC::NPC(string n, string l, string d)
:   interactable( n, l, d)
{
    for (int i = 0; i <= (20-1) ; i++){
        text[i] = "0";
    };
};



//dtor
NPC::~NPC(){
    cout << "dtor for NPC was called" << endl; //testing purposes
};

void NPC::givetext(int i, string t){
    text[i] = t;
};

string NPC::gettext(int i){
    return text[i];
};
