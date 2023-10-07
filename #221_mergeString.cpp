#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string mergeStringHelper(string s1,string s2,int index,string res){
    if(index == s1.length()){
        return res;
    }
    return mergeStringHelper(s1,s2,index + 1,res + s1[index] + s2[index]);
}

string mergeString(string s1, string s2){
    return mergeStringHelper(s1,s2,0,"");
}

