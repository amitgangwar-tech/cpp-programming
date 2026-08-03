// sum of all no. from 1->n which are divisible by m

#include <iostream>
using namespace std;

int main() {
    int n, m, sum = 0;

    cout << "n: ";
    cin >> n;

    cout << "m: ";
    cin >> m;

    for(int i = 1; i <= n; i++) {
        if(i%m == 0) {
            sum += i;
        }
    }

     cout << "sum = " << sum << endl;
     
    return 0;
}