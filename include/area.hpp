#include <iostream>
#include <stdlib.h>
#include "../include/interactables.hpp"

using namespace std;


class area {

    private:
        string name;
        string desc; //description
        unsigned short adj[5]; //bordering areas, see draw.io-map
        interactable con[10]; //containing interactables

    public:
        //ctors
        area() : area("Unknown", "No description available", { }) {};
        area(string n, string d, unsigned short a[5]);
        ~area(); 

        //Methods
        const string& getname();
        void setname(string n); 
        const string& getdesc();
        //void setinter()


};