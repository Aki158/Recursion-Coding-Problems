#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isNumber(string str){
    for(int i = 0;i < str.length();i++){
        if(not isdigit(str[i])) return false;
    }
    return true;
}

bool isPinValid(string pin){
    return (pin.length() == 4 || pin.length() == 6) && isNumber(pin);
}


