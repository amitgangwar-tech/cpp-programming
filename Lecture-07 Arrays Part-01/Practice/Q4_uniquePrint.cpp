#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 6, 7};
    int size = 8;

    for(int i = 0; i < size; i++) {

        bool isUnique = true;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if(isUnique) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}