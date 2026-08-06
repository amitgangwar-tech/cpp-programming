#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "no. of rows: ";
    cin >> r;

    // Upper half
    for (int i = 1; i <= r; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (r - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = r; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (r - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}