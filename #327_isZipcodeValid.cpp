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

bool isZipcodeValid(string zipcode){
    return zipcode.length() == 5 && zipcode.find(" ") == -1 && isNumber(zipcode);
}

