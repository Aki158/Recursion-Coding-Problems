#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string getCentury(int year){
    int resDivision = year / 100;
    int surplus = year % 100;
    int century = (surplus > 0) ? resDivision + 1 : resDivision;
    int surplus2 = century % 10;
    string centuryStr = to_string(century);

    if(century == 11 || century == 12 || century == 13) return centuryStr + "th century";

    if (surplus2 == 1) return  centuryStr + "st century";
    else if (surplus2 == 2) return centuryStr + "nd century";
    else if (surplus2 == 3) return centuryStr + "rd century";
    return centuryStr + "th century";
}

