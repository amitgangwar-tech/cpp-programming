#include <iostream>
using namespace std;

int main() {
// Unary Operators

// Increment Unary Operators -> ++ 
    // a++ -> 1st output then increment of +1
    int a = 1;
    int b = a++;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
   
    
    // ++a -> 1st increment of +1 then output
    int c = 1;
    int d = ++c;

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

// Decrement Unary Operators -> --
    // x-- -> 1st output then decrement of -1
    int x = 1;
    int y = x--;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // --x -> 1st decrement of -1 then output
    int p = 1;
    int q = --p;

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

    return 0;
}