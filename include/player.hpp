#include <iostream>
#include <stdlib.h>
//#include <NPC.hpp>
using namespace std;

class player {

    private:
        string name;

    public:
        //ctor
        player();
        player(string n);
        ~player();

        //Methods
        const string& getname();
        void setname(string s);

};