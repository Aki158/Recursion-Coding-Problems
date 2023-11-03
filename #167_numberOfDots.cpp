#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int numberOfDots(int x){
    if(x == 0){
        return 0;
    }
    return x + numberOfDots(x-1);
}

