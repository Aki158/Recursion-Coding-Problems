#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string toUpperHeadLowerTail(string word, char alphabet){
    string output = "";
    int index = word.rfind(alphabet);

    for(int i = 0;i < word.length();i++){
        char c = word[i];

        if(i < index || index == -1){
            output += toupper(c);
        }
        else{
            output += tolower(c);
        }
    }
    return output;
}

