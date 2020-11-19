#include <iostream>
#include <stdlib.h>
#include <string>

#include "../include/Items.hpp"
#include "../include/interactables.hpp"

using namespace std;

//ctor
Items::Items(string n, string l, string d, bool p)
:  /* name{n}, location{l}, desc{d}, picked{p}*/
interactable(n, l, d){picked = p;};

//dtor
Items::~Items(){
    cout << "dtor for items was called" << endl; //testing purposes
};

const Items::iscollected(){
    return picked;
};

void Items::pickup(){
    picked = true;
};

