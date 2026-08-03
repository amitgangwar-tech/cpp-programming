#include <iostream>
using namespace std;

int main() {
    int line;
    cout << "no. of lines: ";
    cin >> line;
    int stars;
    cout << "no. of stars: ";
    cin >> stars;

    for(int i = 1; i <= line; i++) {
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}