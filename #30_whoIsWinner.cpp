#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string whoIsWinner(int hisCard){
    if (hisCard == 10) return "draw";
    else if (hisCard < 10 && hisCard > 2) return "you win";
    else return "you lose";
}

