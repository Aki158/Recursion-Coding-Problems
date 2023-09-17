#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int sumOfDigits(int minute){
    int divide = minute / 60 % 12;
    int surplus = minute % 60;
    int num1 = divide / 10;
    int num2 = divide % 10;
    int num3 = surplus / 10;
    int num4 = surplus % 10;

    return num1 + num2 + num3 + num4;
}
