#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string toUpperCase(string s){
    string res = "";
    
    for(int i = 0; i < s.length(); i++){
        res += toupper(s[i]);
    }
    return res;
}

