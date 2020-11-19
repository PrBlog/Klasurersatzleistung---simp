#include <iostream>
#include <stdlib.h>
#include <string>

#include "../include/interactables.hpp"

using namespace std;


//ctor
interactable::interactable(string n, string l, string d)
:   name{n}, location{l}, desc{d}{};

//dtor
interactable::~interactable(){
    cout << "dtor for interactable was called" << endl; //testing purposes
};

const string& interactable::getname(){
    return name;
}

const string& interactable::getarea(){
    return location;
}

const string& interactable::getdesc(){
    return desc;
}

void interactable::setarea(string l) {
    location = l;
}



