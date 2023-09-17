#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string twoPaths(string path1, string path2){
    if(path1[path1.length()-1] == '/') path1 = path1.substr(0,path1.length()-1);
    if(path2[0] == '/') path2 = path2.substr(1);
    
    return path1 + "/" + path2;
}

