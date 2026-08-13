// sum from 1-N

#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;  
    }
    return sum;
}

int main(){
    cout << "sum: " << sumN(7) << endl;
    cout << "sum: " << sumN(99) << endl;

    return 0;
}