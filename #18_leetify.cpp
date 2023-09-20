#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string leetify(string stringInput){
    string s1 = "olzeas tb";
    string output = "";

    for(int i = 0;i < stringInput.length();i++){
        char c = stringInput[i];
        char lowerC = tolower(c);
        int index = s1.find(lowerC);

        if(index != -1){
            output += to_string(index);
        }
        else{
            output += c;
        }
    }
    return output;

}

