#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <iostream>
#include <stdlib.h>
//#include <NPC.hpp>
using namespace std;

class player {

    private:
        string name;
        unsigned short location;

    public:
        //ctor
        player();
        player(string n);
        ~player();

        //Methods
        const string& getname();
        void setname(string s);
        const unsigned short getlocation(); 
        void setlocation(unsigned short l);

};
#endif