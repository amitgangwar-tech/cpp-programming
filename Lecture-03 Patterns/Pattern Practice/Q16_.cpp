#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "no. of rows: ";
    cin >> r;

    // Upper half
    for (int i = 1; i <= r; i++) {
        // Print leading spaces
        for (int j = 1; j <= r - i; j++)
            cout << " ";

        // Print hollow stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = r - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= r - i; j++)
            cout << " ";

        // Print hollow stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}