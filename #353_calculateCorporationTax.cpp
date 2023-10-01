#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double stateTax(string state){
    if(state == "AZ"){
        return 4.9;
    }
    else if(state == "CA"){
        return 8.84;
    }
    else if(state == "TX"){
        return 0;
    }
    else if(state == "NC"){
        return 2.5;
    }
    return 5;
}

bool isLeapYear(int year){
    if (year % 400 == 0){
        return true;
    }
    else if(year % 100 == 0){
        return false;
    }
    else if(year % 4 == 0){
        return true;
    }
    return false;
}

int calculateCorporationTax(string state, int year, int profit){
    double tax = stateTax(state);
    bool leapFlag = isLeapYear(year);
    double stateMoney = tax * 0.01 * profit;

    return leapFlag ? ceil(stateMoney) : ceil(0.21 * profit + stateMoney);
}

