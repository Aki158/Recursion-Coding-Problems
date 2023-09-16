#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int getAtLocation(string email){
    int atIndex = email.find("@");
    return atIndex == -1 ? atIndex : atIndex + 1;
}

