#include <iostream>
using namespace std;

double sum(double a , int b){  //parameters
    int s = a+b;
    return s;
}

int minOfTwo(int a, int b){ //parameters
    if(a <= b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout << "sum = " << sum(10,3)<< endl; //arguments

    cout << "min: " << minOfTwo(5,100); //arguments

    return 0;
}