#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "i = ";
    cin >> i;
    int n;
    cout << "n = ";
    cin >> n;

   for(; i <= n; i++) {
    cout << i << " ";
   }
    cout << endl;
    
    return 0;
}