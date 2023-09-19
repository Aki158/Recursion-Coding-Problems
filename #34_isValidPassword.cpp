#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isValidPassword(string password){
    if(password.find(" ") != -1 || password.length() < 6){
        return false;
    }

    bool upperFlag = false;
    bool lowerFlag = false;
    bool numFlag = false;
    bool markFlag = false;

    for(int i = 0;i < password.length();i++){
        char c = password[i];
        int numC = static_cast<int>(c-'0');

        if(c >= 'A' && c <= 'Z'){
            upperFlag = true;
        }
        else if(c >= 'a' && c <= 'z'){
            lowerFlag = true;
        }
        else if(numC >= 0 && numC <= 9){
            numFlag = true;
        }
        else{
            markFlag = true;
        }
    }
    return upperFlag && lowerFlag && numFlag && !(markFlag);
}

