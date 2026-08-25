#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = 0;
    int largestIndex = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }

        if(arr[i] > largest) {
            largest = arr[i];
            largestIndex = i;
        }
    }

    swap(arr[smallestIndex], arr[largestIndex]);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}