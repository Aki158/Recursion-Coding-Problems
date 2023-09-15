#include <iostream>

using namespace std;

void entry(){
    int myPower = 300;
    int mySpeed = 200;
    int myTechnique = 50;
    int myDefense = 500;

    myPower += 10;
    mySpeed -= 5;
    myTechnique *= 7;
    myDefense /= 2;

    cout << "myPower : " + to_string(myPower) << endl;
    cout << "mySpeed : " + to_string(mySpeed) << endl;
    cout << "myTechnique : " + to_string(myTechnique) << endl;
    cout << "myDefense : " + to_string(myDefense) << endl;
}