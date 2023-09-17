#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string hideAddress(string address){
    int atIndex = address.find('@');
    string front = address.substr(0,3);
    string back = address.substr(atIndex);

    if (atIndex <= 4) return address;
    return front + "..." + back;
}

