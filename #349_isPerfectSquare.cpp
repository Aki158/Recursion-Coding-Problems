#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double distance(int x, int y){
    return sqrt(pow(x,2) + pow(y,2));
}

bool hasDecimal(double num){
    return fmod(num,1) != 0;
}

bool isPerfectSquare(int x, int y){
    return !hasDecimal(distance(x,y));
}

