#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "i = ";
    cin >> i;
    int n;
    cout << "n = ";
    cin >>n;

    do {
        cout << i <<  " ";
        i++;
    } while(i <= n);

    cout << endl;
    return 0;
}