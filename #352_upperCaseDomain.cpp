#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string upperCaseDomain(string email){
    int index = email.find("@");
    string domain = email.substr(index+1);
    string output = "";

    for(int i = 0;i < domain.length();i++){
        char c = domain[i];

        output += toupper(c);
    }
    return output;
}
