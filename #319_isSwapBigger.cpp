#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isSwapBigger(int n){
    int swapN = n % 10 * 10 + n / 10;
    
    return swapN >= n;
}

