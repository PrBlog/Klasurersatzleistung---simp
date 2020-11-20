#include <iostream>
#include <stdlib.h>
#include "../include/interactables.hpp"

using namespace std;


class area {

    protected:
        string name;
        string desc; //description
        //unsigned short adj[5]; //bordering areas, see draw.io-map
        interactable con[10]; //containing interactables

    public:
        bool visited;
        //ctors
        area() : area("Unknown", "No description available") {};
        area(string n, string d);
        ~area(); 

        //Methods
        void visit();
        const washere();
        const string& getname();
        void setname(string n);
        const string& getdesc();
        //void setinter()


};