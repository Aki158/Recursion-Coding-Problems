#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string getLatitudeDirection(double latitude){
    if(latitude > 0){
        return "north";
    }
    else if(latitude == 0){
        return "equator";
    }
    return "south";
}

string getLongitudeDirection(double longitude){
    if(longitude > 0){
        return "east";
    }
    else if(longitude == 0){
        return "prime meridian";
    }
    return "west";
}

string calculateLocation(double latitude, double longitude){
    return getLatitudeDirection(latitude) + "/" + getLongitudeDirection(longitude);
}
