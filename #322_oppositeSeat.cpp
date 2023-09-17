#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int oppositeSeat(int seat, int len){
    int n = len * 2 + 1;

    return n - seat;
}

