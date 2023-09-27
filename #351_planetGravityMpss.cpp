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
    else if(planet == "Mercury"){
        return 3.7;
    }
    return 0;
}

double metersToMiles(double meter){
    return meter * 0.000621371;
}

int fallingDistance(string planet, int time){
    double meter = 0.5 * planetGravityMpss(planet) * time * time;
    return floor(metersToMiles(meter));
}

