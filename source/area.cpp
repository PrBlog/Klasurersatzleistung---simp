#include <iostream>
#include <stdlib.h>
#include "../include/area.hpp"

using namespace std;


area::area(string n, string d)
: name{n}, desc{d}{
    visited = false;
    cout << "Area Konstruktor Name: " << area::getname() << endl;
}

area::~area()
{
    cout << "Area Destructor Name: " << area::getname() << endl;  
}

void area::setname(string n) {
    name = n;
}

const std::string& area::getname(){
    return name;
}

const std::string& area::getdesc(){
    return desc;
}

void area::visit(){
    visited = true;
}

const area::washere(){
    return visited;
}