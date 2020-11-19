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
        string location; 
        
        //ctor
        interactable() : interactable("Unknown Item", "Unknown location", "No further Information") {};
        interactable(string n, string l, string d);
        //dtor
        ~interactable();

        //methods
        const string& getname();
        const string& getarea();
        const string& getdesc();
        void setarea(string l);
};
#endif