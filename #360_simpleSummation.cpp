#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int simpleSummation(int n){
    if(n == 0){
        return 0;
    }
    return n + simpleSummation(n-1);
}

