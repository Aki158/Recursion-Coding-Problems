#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string getSlug(string url){
    int index = url.rfind("/");
    
    if(index == url.length()-1){
        url = url.substr(0,url.length()-1);
        index = url.rfind("/");
    }

    return url.substr(index+1);
}

