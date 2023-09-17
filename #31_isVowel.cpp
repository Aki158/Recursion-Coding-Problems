#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isVowel(char alphabet){
    char c = tolower(alphabet);

    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o';
}

