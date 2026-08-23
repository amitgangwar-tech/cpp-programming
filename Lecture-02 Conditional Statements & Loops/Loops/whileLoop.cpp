#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "i = ";
    cin >> i;
    int n;
    cout << "n = ";
    cin >> n;

    while(i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}