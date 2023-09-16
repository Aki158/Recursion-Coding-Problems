#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isRationalNumber(int number){
    return fmod(sqrt(number),1) == 0;
}

