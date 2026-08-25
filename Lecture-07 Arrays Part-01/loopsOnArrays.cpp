#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[] = {5, 15, 1, 4, -47, 0};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = 0;
    int largestIndex = 0;

    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            smallestIndex = i;
        }

        if(nums[i] > largest){
            largest = nums[i];
            largestIndex = i;
        }
    }

    cout << "smallest = " << smallest << endl;
    cout << "smallest index = " << smallestIndex << endl;

    cout << "largest = " << largest << endl;
    cout << "largest index = " << largestIndex << endl;

    return 0;
}