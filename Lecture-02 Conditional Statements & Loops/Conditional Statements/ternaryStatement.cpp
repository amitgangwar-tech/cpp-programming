#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    cout << (n >= 0 ? "n is positive" : "n is negative") << endl;

    return 0;
}