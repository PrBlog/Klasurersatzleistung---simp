#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "../include/color.hpp"
#include "../include/game.hpp"
#include "../include/area.hpp"
#include "../include/ini.hpp"


using namespace std;


int main()
{

string start;
start = "null";

while (start != "no" || start != "No" || start != "NO"){ //brauchen wir die Schleife überhaupt?

cout << "Do you want to start the game? Type ";
setcolor(2);
cout << "yes ";
setcolor(7);
cout << "or ";
setcolor(2);
cout << "no" << endl;
setcolor(7);

cin >> start;

if (start == "yes" || start == "YES" || start == "Yes") {
    cout << "Starting the Game!" << endl;
    // system("CLS");
    game();
} else if (start == "no") {
    break;
}
}
    return 0;

}