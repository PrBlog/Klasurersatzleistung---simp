#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "../include/player.hpp"

using namespace std;

player::player(string n)
: name{n} {}

player::~player()
{
    cout << "Destructor Name: " << player::getname() << endl;
}

// void player::setname(string n) {
//     name = n;
// }

const std::string& player::getname(){
    return name;
}

const unsigned short player::getlocation(){
    return location;
} 

void player::setlocation(unsigned short l){
    location = l;
}
