#include <iostream>
using namespace std;

int main(){
    int r;
    cout << "no. of rows: ";
    cin >> r;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < r-i-1; j++){
            cout << " ";
        }
        for(int j = 1; j <= i+1; j++){
            cout << j;
        }
        for(int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}