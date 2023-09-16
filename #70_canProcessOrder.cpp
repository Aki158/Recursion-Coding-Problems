#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool canProcessOrder(bool beef, bool chicken, bool salad, bool coffee, bool tea){
    return !(beef == chicken || coffee == tea);
}

