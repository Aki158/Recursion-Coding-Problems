#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string replaceWithChar(string s, char letter){
    while(s.find(letter) != -1){
        s.replace(s.find(letter),1,"");
    }
    return s;
}

