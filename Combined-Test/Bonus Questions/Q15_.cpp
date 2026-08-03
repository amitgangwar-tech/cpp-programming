#include <iostream>
using namespace std;

int main(){
    int r;
    cout << "no. of rows = ";
    cin >> r;

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = r; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}