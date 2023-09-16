#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string middleSubstring(string stringInput){
    if (stringInput.length() <= 2) return string(1,stringInput[0]);

    int middle = stringInput.length() / 2.0;
    int startIndex = ceil(middle / 2.0);

    return stringInput.substr(startIndex,middle);
}

