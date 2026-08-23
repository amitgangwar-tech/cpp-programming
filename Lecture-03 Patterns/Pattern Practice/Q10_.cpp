#include <iostream>
using namespace std;

int main(){
    int r;
    cout << "no. of rows: ";
    cin >> r;

     int num = 1;

    for(int i = 0; i < r; i++){
        for(int j = 1; j <= i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
    return 0;
}