#include <iostream>
using namespace std;

int main() {
    int i, n;
    int totalSum = 0, oddSum = 0, evenSum = 0;
    cout << "n: ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        totalSum+= i;

        if(i%2 == 0) {
        evenSum+= i;

    }else {
        oddSum+= i;

    } }
    cout << "sum= " << totalSum << endl;
    cout << "Even sum= " << evenSum << endl;
    cout << "Odd sum= " << oddSum << endl;


    return 0;
}