#include <iostream>
using namespace std;

int main() {
    int i, n;
    cout << "n: ";
    cin >> n;

    bool isPrime = true;

    for(i = 2; i <= n-1; i++) { 
        if(n%i == 0) {
           isPrime = false;
           break;

        } 
    }
    if(isPrime == true) {
        cout << n << " is prime" << endl;

    } else {
        cout << n << " is non-prime" << endl;

    }
    
    return 0;
}