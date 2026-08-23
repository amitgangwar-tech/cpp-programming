#include <iostream>
using namespace std;

int main() {
// Type Conversion[implicit]-> store small value in big space, automatically done by compiler
    char grade = 'A';
    int value = grade;
    cout << value << "\n";

// Type Casting[explicit]-> forced by coder, convert big data into small
    double price = 8.33;
    int newPrice = (int)price;
    cout << newPrice << "\n";

    return 0;

}