#include <iostream>
using namespace std;

int main(){
    int r;
    cout << "no. of rows: ";
    cin >> r;

    for(int i = 0; i < r; i++){
        for(int j = i+1; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}