#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, power = 1;

    while(decNum > 0){
        int remainder = decNum%2;
        decNum/= 2 ;

        ans+= remainder*power;
        power*= 10;
     }
     return ans;
}

int main(){
    int decNum;
    cin >> decNum;

    for(int i = 1; i <= decNum; i++){
cout << i << " in Binary is " << decToBinary(i) << endl;
    }

    return 0;
}