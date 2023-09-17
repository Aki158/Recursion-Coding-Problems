#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isNumberOrAlphabet(string str){
    string s = "0123456789abcdefABCDEF";
    
    for(int i = 0;i < str.length();i++){
        if(s.find(str[i]) == -1) return false;
    }
    return true;
}

bool isValid(string colorCode){
    string code = colorCode.substr(1);

    return colorCode[0] == '#' && code.length() == 6 && isNumberOrAlphabet(code);
}


