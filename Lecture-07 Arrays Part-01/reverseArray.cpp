#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for(int i = 0; i < sz; i++) {
        if(arr[i] == target) {
            return i;       // FOUND
        }
    }

    return -1;              // NOT FOUND
}

void reverseArray(int arr[], int sz){
    int start = 0, end = sz-1;
    
    while(start < end){
        swap(arr[start], arr[end]);
        start++; 
        end--;
    }
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
   
    reverseArray(arr, sz);
    for(int i = 0; i<sz; i++){
    cout << arr[i] << " ";
    }
     cout << endl;
     
    return 0;
}