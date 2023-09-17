#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isSameLocation(int x1, int v1, int x2, int v2){
    if(x1 == x2) return true;
    else if(v1 == v2) return false;

    double s = (x2 - x1 - 0.0) / (v1 - v2);
    if(s < 0) return false;
    if(fmod(s,1) == 0) return true;
    return false;
}

