#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "ch: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "ch is lowercase\n";

    } else if(ch >= 'A' && ch <= 'Z') {
        cout << "ch is uppercase\n";

    } else {
        cout << "not an alphabet\n";

    }

    return 0;
}