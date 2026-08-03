#include <iostream>
using namespace std;

int main(){
    int n, factorial = 1;
    cout << "n : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        factorial = factorial*i;

    }
    cout << "factorial of " << n << " = " << factorial << endl;

    return 0;
}