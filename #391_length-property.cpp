#include <iostream>
#include <string>

using namespace std;

void entry(){
    cout << string("Computer").length() << endl;
    cout << string("recursion@info.com" ).size() << endl;
    cout << "Computer"[string("Computer").length() - 1] << endl;
    cout << "recursion@info.com"[string("recursion@info.com").length() - 1] << endl;
}
