#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string screenViewMode(int height, int width){
    if (height >= width) return "portrait";
    return "landscape";
}

