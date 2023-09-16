#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string insertUnderscoreAt(string s, int i){
    if (i >= s.length()) return s;
    
    string front = s.substr(0,i);
    string back = s.substr(i);

    return front + "_" + back;
}

