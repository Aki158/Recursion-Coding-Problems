#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double interestsPaid(int initialLoan, bool didPayOnTime){
    if(didPayOnTime) return initialLoan * 1.02 + 2.5;
    return initialLoan * 1.15 + 2.5;
}

