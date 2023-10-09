#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string swapPositionHelper(string s,int i,string res){
    int l = s.length();

    if(l <= i){
        if(l % 2 == 0){
            return res;
        }
        return res + s[i-1];
    }
    return swapPositionHelper(s,i+2,res+s[i]+s[i-1]);
}

string swapPosition(string s){
    return swapPositionHelper(s,1,"");
}

