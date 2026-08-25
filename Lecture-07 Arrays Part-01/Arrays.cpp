#include <iostream>
using namespace std;

int main(){
    int marks[100] = {45, 54, 76, 78, 98};
    int size = 5;

    for(int i=0; i<size; i++){  // starts from 0 to n-1
        cout << marks[i] << endl;
    }

    return 0;
}
