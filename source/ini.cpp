#include "../include/area.hpp"
#include "../include/NPC.hpp"
#include "../include/Items.hpp"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>


using namespace std;



// void items(){
    
//     string line;
//     ifstream file ("test.txt");
//     if (file.is_open())
//     {
//         for (int lineno = 1; getline (file,line) && lineno < 3; lineno++)
//             if (lineno == 2)
//                 cout << line << endl;
//                 file.close();
//     }
//     else cout << "Can not open the file"; 
// }


void areatest(){
    area* allareas[7];
    //unsigned short cavadj[] = {3, 0, 0, 0, 0};
    allareas[0] = new area {"a cellar", "A musty, dark cellar sealed with a heavy wooden door. Besides you there's only a old man cowering in a corner of the basement"};
    // area cellar{"a cellar", "A musty, dark cellar sealed with a heavy wooden door. Besides you there's only a old man cowering in a corner of the basement", cavadj};
    cout << "this is " << allareas[0]->getname() << endl;
    string test = "null";
    if (allareas[0]->visited == false){
        test = "no";
    };
    if (allareas[0]->visited == true){
        test = "yes";
    };

    cout << "have you been here?" << endl;
    cout << test << endl;

    allareas[0]->visit();

    if (allareas[0]->visited == false){
        test = "no";
    };
    if (allareas[0]->visited == true){
        test = "yes";
    };
    cout << "have you been here?" << endl;
    cout << test << endl;

}

void npctest(){
    NPC Thomas{"Thomas", 2, "a frail old man"};
    cout << "Before you you see " << Thomas.getdesc() << ", he seems to belong in" << Thomas.getarea() << endl;

    Thomas.givetext(0, "oh ... he - hello? I - I did not expect ... anyone really. May I kindly ask you to leave?");
    
    cout << "As you approach the man, he seems disturbed: " << endl;
    cout << Thomas.gettext(0) << endl;

}

void itemtest(){
    Items* allitems[20];
    allitems[0] = new Items {"bronze key", 2, "This is a rusty old key", 0};

    cout << "you find a " << allitems[0]->getname() << " inside the cavern." << endl;
    cout << "The " << allitems[0]->getname() << "is currently located in " << allitems[0]->getarea() << endl;
    // if (key1.iscollected() == false){
    //     string reply = "null";
    //     cout << "Enter yes if you would like to pick it up" << endl;
    //     cin >> reply;
    //     if (reply == "yes" || reply == "YES" || reply == "Yes") {
    //         key1.pickup();
    //     }; 

    // };
    // cout << "The " << key1.getname() << "is currently located in " << key1.getarea() << endl;

}
