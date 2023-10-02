#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int lenString(string string){
    if(string == "") return 0;
    return 1 + lenString(string.substr(1));
}

