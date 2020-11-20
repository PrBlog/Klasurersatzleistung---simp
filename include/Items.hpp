#ifndef ITEMS_HPP
#define ITEMS_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include "../include/interactables.hpp"

using namespace std;


class Items : public interactable {
    
        

    public:
        bool picked;
        
        //ctor
        Items() : Items("Unknown Item", 0, "No further information", 0) {};
        Items(string n, unsigned short l, string d, bool p);

        //dtor
        ~Items();

        const iscollected();
        void pickup();

};



#endif

        