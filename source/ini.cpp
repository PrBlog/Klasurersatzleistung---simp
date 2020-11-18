#include "../include/area.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

void cavern(){

    unsigned short cavadj[] = {1, 0, 0, 0, 0};
    area cavern{"a cavern", "A rustic, currently occupied cavern sealed with a heavy wooden door.", cavadj};
    cout << "\n You find yourself inside " << cavern.getname()<< endl;
    cout << "\n Description: " << cavern.getdesc() << endl;

}