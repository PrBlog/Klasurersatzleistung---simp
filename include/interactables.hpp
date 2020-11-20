#ifndef INTERACTABLES_HPP
#define INTERACTABLES_HPP
#include <iostream>
#include <string>

using namespace std;

class interactable {
    protected:
        string name;
        string desc;
    
    public:
        unsigned short location; 
        
        //ctor
        interactable() : interactable("Unknown Item", 0, "No further Information") {};
        interactable(string n, unsigned short l, string d);
        //dtor
        ~interactable();

        //methods
        const string& getname();
        const unsigned short getarea();
        const string& getdesc();
        void setarea(unsigned short l);
};
#endif