#include <iostream>
using namespace std;

int main() {
    int age;
    bool citizen;

    cout << "Age: ";
    cin  >> age;

    if(age >= 18) {
        cout << " eligible to vote";

    } else {
        cout << "not eligible to vote";

    }
    

    return 0;
}