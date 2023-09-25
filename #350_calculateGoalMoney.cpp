#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double calculateInterestRate(int capital){
    return capital % 2 == 0 ? 0.02 : 0.03;
}

int calculateGoalMoney(int capital, int year){
    double i = calculateInterestRate(capital);
    return int(capital * pow(1+i,year));
}

