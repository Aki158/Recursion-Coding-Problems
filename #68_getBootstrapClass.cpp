#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string getBootstrapClass(int screenWidth){
    if (screenWidth < 768) return "xs";
    else if (screenWidth < 992) return "sm";
    else if (screenWidth < 1200) return "md";
    return "lg";
}

