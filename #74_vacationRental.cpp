#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int vacationRental(int people, int day){
    int perDay = 0;

    if (day <= 3) perDay = 80;
    else if (day < 10) perDay = 60;
    else perDay = 50;

    return static_cast<int>(floor(people * day * perDay * 1.12 * 1.08));
}

