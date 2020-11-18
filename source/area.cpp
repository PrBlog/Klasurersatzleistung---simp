#include <iostream>
#include <stdlib.h>
#include "../include/area.hpp"

using namespace std;


area::area(string n, string d, unsigned short a[5])
: name{n}, desc{d}, adj{a[5]}{}

area::~area()
{
    cout << "Destructor Name: " << area::getname() << endl;  
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

