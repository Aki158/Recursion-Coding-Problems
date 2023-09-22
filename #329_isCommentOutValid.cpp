#include <iostream>
#include <string>
#include <cmath>
#include <regex>

using namespace std;

bool isCommentOutValid(string s){
    while(true){
        int index1 = s.find("/**/");
        int index2 = s.find("//");

        if(index1 != -1){
            s.replace(index1,4,"a");
        }
        else if(index2 != -1){
            s.replace(index2,2,"a");
        }
        else{
            break;
        }
    }

    s = regex_replace(s,regex("a"),"");

    return s.length() == 0;
}
