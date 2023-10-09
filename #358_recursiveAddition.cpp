#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int recursiveAddition(int m, int n){
    if(n == 0){
        return m;
    }
    return 1 + recursiveAddition(m,n-1);
}

