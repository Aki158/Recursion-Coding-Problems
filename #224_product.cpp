#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int productHelper(int x,int y,int res){
    if(y == 0){
        return res;
    }
    else if(y < 0){
        return productHelper(x,y+1,res-x);
    }
    return productHelper(x,y-1,res+x);
}

int product(int x, int y){
    if(x > y){
        return productHelper(y,x,0);
    }
    return productHelper(x,y,0);
}

