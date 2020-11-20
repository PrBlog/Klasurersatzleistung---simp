#ifndef NPC_HPP
#define NPC_HPP
#include <iostream>
#include <string>
#include "../include/interactables.hpp"

using namespace std;

class NPC : public interactable {
    private:
        string text[20];
    
    public:
        
        //ctor
        NPC () : NPC("Unknown Item", 0, "No further Information") {};
        NPC(string n, unsigned short l, string d);
        
        //dtor
        ~NPC();
        
        void givetext(int i, string t);
        
        string gettext(int i);


};
#endif