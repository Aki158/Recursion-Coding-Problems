#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double checkCardType(string creditCardType){
    return creditCardType == "Visa" || creditCardType == "MasterCard";
}

double askForTip(int cost){
    if(cost % 3 == 0){
        return 0.03;
    }
    else if(cost % 5 == 0){
        return 0.05;
    }
    else if(cost % 7 == 0){
        return 0.07;
    }
    return 0.1;
}

double processPayment(string creditCardType , int cost){
    if(!(checkCardType(creditCardType))){
        return -1;
    }

    double consumptionTax = 0.1;
    double chip = askForTip(cost);
    double totalPayment = cost * (1 + consumptionTax + chip);

    return totalPayment >= 300 ? -1 : totalPayment;
}

