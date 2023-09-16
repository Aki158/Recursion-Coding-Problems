#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string toLowerCase(string stringInput){
    for(int i = 0;i < stringInput.length();i++){
        stringInput[i] = tolower(stringInput[i]);
    }
    return stringInput;
}

