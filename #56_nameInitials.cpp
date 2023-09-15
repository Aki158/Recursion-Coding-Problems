#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string nameInitials(string firstName, string lastName){
    return string(1,firstName[0]) + '.' + lastName[0];
}