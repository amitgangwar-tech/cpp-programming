#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "a: ";
    cin >> a;

    if(a == 0) {
        cout << "a is equal to zero";

    } 
    else if(a > 0) {
        cout << "a is positive";

    } 
    else if(a < 0) {
        cout << "a is negative";
    }

    return 0;
}