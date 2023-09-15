#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool checkLastDigits(int x, int y, int z){
    return (x * y) % 10 == z % 10;
}

