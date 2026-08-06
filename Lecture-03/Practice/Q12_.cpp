#include <iostream>
using namespace std;

int main(){
    int r;
    cout << "no. of rows: ";
    cin >> r;

    for(int i = 0; i < r; i++){
        for(int j = i+1; j > 0; j--){
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    
    return 0;
}