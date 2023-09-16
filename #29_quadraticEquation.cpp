#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int quadraticEquation(int a, int b, int c){
    if (a == 0) return 0;

    int res = b * b  - 4 * a * c;

    if (res > 0) return 2;
    else if (res == 0) return 1;
    else return -2;
}

