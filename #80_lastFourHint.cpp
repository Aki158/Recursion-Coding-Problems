#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string lastFourHint(string stringInput){
    if(stringInput.length() < 6) return "There is no Hint";

    string hint = stringInput.substr(stringInput.length()-4);

    return "Hint is:" + hint;
}

