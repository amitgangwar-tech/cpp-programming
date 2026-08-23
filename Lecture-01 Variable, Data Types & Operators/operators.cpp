#include <iostream>
using namespace std;

int main() {
// Arithmetic Operators
    int a, b;
    cout << "Enter a= ";
    cin >> a;
    cout << "Enter b= ";
    cin >> b;

    cout << "Sum = " << a+b << "\n";
    cout << "Difference = " << a-b << "\n";
    cout << "Product = " << a*b << "\n";
    cout << "Quotient = " << a/b << "\n";
    cout << "Remainder = " << a%b << "\n";
    cout << "Division = " << a/(double)b << "\n";

// Relational Operators
    int x, y;
     cout << "Enter x= ";
    cin >> x;
    cout << "Enter y= ";
    cin >> y;

    cout << boolalpha; // print bool values 1-> true, 0-> false

    cout << "x < y = " << (x < y) << "\n";
    cout << "x <= y = " << (x <= y) << "\n";
    cout << "x > y = " << (x > y) << "\n";
    cout << "x >= y = " << (x >= y) << "\n";
    cout << "x == y = " << (x == y) << "\n";
    cout << "x != y = " << (x != y) << "\n";

// Logical Operators
    cout << !(3<1) << "\n";   // [ ! -> Logical NOT] changes: true<->false

    cout << ( (1>2) || (1>0) ) << "\n";
 // [ || -> Logical OR / Pipe Operator] for multiple statements if just 1 statement is true and others are true/false,
// the answer is always true, but if all are false then the answer is false too

    cout << ( (4<3) && (4<5) ) << "\n";
// [ && -> Logical AND / Ampersand] for multiple statements if 1 statement is true and others are false, the answer is false
          
    return 0;
}