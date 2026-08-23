#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "i = ";
    cin >> i;
    int n;
    cout << "n = ";
    cin >> n;
    int sum = 0;

   for(; i <= n; i++) {
    if(i%2 != 0) { // for even i%2 == 0
    sum += i;
    }
   }
    cout << "Sum = " << sum << endl;
    
    return 0;
}