#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double planetGravityMpss(string planet){
    if(planet == "Earth"){
        return 9.8;
    }
    else if(planet == "Jupiter"){
        return 24.79;
    }
    else if(planet == "Mars"){
        return 3.71;
    }
    else if(planet == "Pluto"){
        return 0.58;
    }
    else if(planet == "Moon"){
        return 1.62;
    }
    return 0;
}

double getVelocity(double g,int height){
    return sqrt(2 * g * height);
}

string emotionLevel(double v){
    if(v >= 80){
        return "terrified";
    }
    else if(v >= 60){
        return "frighten";
    }
    else if(v >= 40){
        return "scared";
    }
    return "afraid";
}

string getEmotion(int height, string planet){
    double g = planetGravityMpss(planet);
    double v = getVelocity(g,height);
    return g == 0 ? "no data" : emotionLevel(v);
}

