#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string commonPrefixHelper(string s1, string s2, int index, string res){
    if(s1[index] != s2[index] || index >= s1.length() || index >= s2.length()){
        return res;
    }
    return commonPrefixHelper(s1,s2,index+1,res+s1[index]);
}

string commonPrefix(string s1, string s2){
    return commonPrefixHelper(s1,s2,0,"");
}

