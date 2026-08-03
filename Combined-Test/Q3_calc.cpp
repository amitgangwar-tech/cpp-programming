#include <iostream>
using namespace std;

int main() {
    int a, b, r;
    int PI = 3.14159;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "r: ";
    cin >> r;

    cout << "Sum = " << a+b << endl;
    cout << "Diff = " << a-b << endl;
    cout << "Product = " << a*b << endl;
    cout << "Quotient = " << a/(double)b << endl;
    cout << "Remainder = " << a%b << endl;

    // Area
    cout << "Area Of:\n";
    cout << "Square = " << a*a << endl;
    cout << "Rectangle = " << a*b << endl;
    cout << "Circle = " << PI*r*r << endl;

    return 0;
}