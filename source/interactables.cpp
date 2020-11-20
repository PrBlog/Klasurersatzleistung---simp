#include <iostream>
#include <stdlib.h>
#include <string>

#include "../include/interactables.hpp"

using namespace std;


//ctor
interactable::interactable(string n, unsigned short l, string d)
:   name{n}, location{l}, desc{d}{
    cout << "ctor for interactable was called" << endl; //testing purposes
};

//dtor
interactable::~interactable(){
    cout << "dtor for interactable was called" << endl; //testing purposes
};

const string& interactable::getname(){
    return name;
}

const unsigned short interactable::getarea(){
    return location;
}

const string& interactable::getdesc(){
    return desc;
}

void interactable::setarea(unsigned short l) {
    location = l;
}



