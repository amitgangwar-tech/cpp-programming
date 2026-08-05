#include <iostream>
using namespace std;

int main(){
    int r;
    cout << "no. of rows: ";
    cin >> r;

    for(int i = 1; i <= r; i++){
       for(int j = 1; j <= i-1; j++){
        cout << " ";
    }
     for(int j = 1; j <= r-i+1; j++){
            cout << "*";
        }
    cout << endl;
    }

    return 0;
}