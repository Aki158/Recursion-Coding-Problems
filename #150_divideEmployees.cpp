#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char divideEmployees(int num){
    int n = num % 10;

    if (n == 0 || n == 1) return 'A';
    else if (n == 2 || n == 9) return 'B';
    else if (n == 3 || n == 8) return 'C';
    else if (n == 4 || n == 7) return 'D';
    return 'E';
}

