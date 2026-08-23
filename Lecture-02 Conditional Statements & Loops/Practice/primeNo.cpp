#include <iostream>
using namespace std;

int main() {
    int i;
    int n;
    cout << "n = ";
    cin >> n;

    bool isPrime = true;

   for(i = 2; i <= n-1; i++) {
    if(n%i == 0) {
        isPrime = false;
    break;
}
   }

   if(isPrime == true) {
    cout << "n is prime no.";

   } else {
    cout << "n is not a prime no.";
   }
    
    return 0;
}