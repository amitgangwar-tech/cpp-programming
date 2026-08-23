#include <iostream>
using namespace std;

int sumOfDig(int n){
    int digSum = 0;

    while(n > 0){
        int lastDig = n%10;
        n/= 10;
        digSum += lastDig;
    }
    return digSum;
}

int main(){
    cout << "sum = " << sumOfDig(123) << endl;

    return 0;
}