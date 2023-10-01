#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int infectedPeople(int day){
    if(day == 0){
        return 1;
    }
    return 2 * infectedPeople(day-1);
}

