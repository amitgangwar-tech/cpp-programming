#include <iostream>
using namespace std;

int main() {
    int age = 19;  // int varaiable stores integer value, space: 4 byte
    char grade = 'A';  // char stores characters like A,B,C... and a,b,c.. , space: 1 byte
                       // char stored in the form of ASCII values
                       // A=65, B=66.... , a=97, b=98...
    float price = 10.22f;  // float stores decimal values, space: 4 byte, stores 6-7 decimals after that it approxes the value
    double PI = 3.14159;  // double also stores decimal values,  space: 8 bytes, stores 16-17 decimals
    bool pass = true; // boolean data meaning either 'true=1' or 'false=0', space:1 byte
    cout << age << "\n";

  //  cout << sizeof(age) << "\n";  // sizeof(*) prints how much space the value took

    cout << grade << "\n";
    cout << price << "\n";
    cout << PI << "\n";
    cout << pass << "\n";

    return 0;

}