#include <iostream>
using namespace std;

bool isPrime(int n){
    bool isPrime = true;

    for(int i = 2; i <= n-1; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main(){
    int n;
    cin >> n;

    if(isPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}