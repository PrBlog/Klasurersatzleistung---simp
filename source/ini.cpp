#include "../include/area.hpp"
#include "../include/NPC.hpp"
#include <iostream>
#include <stdlib.h>
#include <fstream>


using namespace std;



void items(){
    
    string line;
    ifstream file ("test.txt");
    if (file.is_open())
    {
        for (int lineno = 1; getline (file,line) && lineno < 3; lineno++)
            if (lineno == 2)
                cout << line << endl;
                file.close();
    }
    else cout << "Can not open the file"; 
}


void cavern(){
    //option 1
    //string text[] = {"blah1","blah2","blah3"};
    //NPC man{"sinister man", "cavern", "sinister man", text};
    // cout << "\nYou see a " << man.getname() << " in the " << man.getarea() << endl;
    interactable key1{"bronze key", "tavern", "This is a rusty old key"};
    cout << "\nYou find a " << key1.getname() << " inside the jar" << endl;
    interactable key{"silver key", "cavern", "This is a shiny old key"};
    cout << "\nYou find a " << key.getname() << " inside the jar" << endl;

    //option 2
    //items();

    //interactable con[] = {man, key, key1};
    unsigned short cavadj[] = {1, 0, 0, 0, 0};
    area cavern{"a cavern", "A rustic, currently occupied cavern sealed with a heavy wooden door.", cavadj /*, con*/};
    cout << "You find yourself inside " << cavern.getname()<< endl;
    cout << "Description: " << cavern.getdesc() << endl;


}

void npctest(){
    NPC Thomas{"Thomas", "cavern", "a frail old man"};
    cout << "Before you you see " << Thomas.getdesc() << ", he seems to belong in" << Thomas.getarea() << endl;

    

}

