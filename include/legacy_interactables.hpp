#include <iostream>
#include <string>

using namespace std;

class interactables {
    private:
        string name;
        string location;
        string desc;
    
    public:
        //ctor
        interactables();


};

class NPC : public interactables {
    private:
        string Text[];

    public:
        //ctor
        NPC();
        
        void talk();

};

class Items : public interactables {
    private:
        

    public:
        //ctor
        Items();

        void inspect(string s);

};

class Mob : public NPC {
    private:
    public:
        //ctor
        Mob();
}