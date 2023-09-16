#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isValidEmail(string email){
    int atLocation = email.find("@");
    int spaceLocation = email.find(" ");
    string atBackStr = email.substr(atLocation+1);

    return atLocation > 0 && spaceLocation == -1 && atBackStr.find("@") == -1 && atBackStr.find(".") != -1;
}

