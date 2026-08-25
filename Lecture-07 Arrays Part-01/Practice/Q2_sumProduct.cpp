#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "sum = " << sum << endl;
    cout << "product = " << product << endl;

    return 0;
}