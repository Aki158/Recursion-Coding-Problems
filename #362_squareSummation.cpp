#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int squareSummation(int n){
    if(n <= 1) return n;
    return n * n + squareSummation(n-1);
}

