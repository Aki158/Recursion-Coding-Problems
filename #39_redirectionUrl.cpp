#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string redirectionUrl(string language){
    string url = "www.example.org/";

    if (language == "Japanese") return url + "ja";
    else if (language == "English") return url + "en";
    else if (language == "Spanish") return url + "es";
    else if (language == "Russian") return url + "ru";
    else return url;
}

