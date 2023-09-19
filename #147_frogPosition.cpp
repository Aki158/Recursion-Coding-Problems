#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int frogPosition(int leaves, int jumps, int start){
    int n = (jumps +start) % leaves;

    if(n == 0) return leaves;
    else if(n < 0) return leaves + n;
    return n;
}

