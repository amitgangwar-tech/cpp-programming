#include <iostream>
using namespace std;

int binaryToDec(int binNum){
    int ans = 0, power = 1;

    while(binNum > 0){
        int remainder = binNum%10;
        ans+= remainder*power;

        binNum/= 10 ;
        power*= 2;
        
     }
     return ans;
}

int main(){
   int binNum;
   cin >> binNum;

cout << binNum << " in Binary is " << binaryToDec(binNum) << endl;

    return 0;
}