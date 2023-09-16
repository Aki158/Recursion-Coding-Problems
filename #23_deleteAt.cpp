#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string deleteAt(string s, int i){
    if (i == 0 || i > s.length()) return s;

    string front = s.substr(0,i-1);
    string back = s.substr(i);

    return front + back;
}

