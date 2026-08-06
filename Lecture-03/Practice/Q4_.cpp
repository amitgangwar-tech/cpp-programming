#include <iostream>
using namespace std;

int main(){
    int r;
    cout << "no. of rows: ";
    cin >> r;

    char ch = 'A';

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= r; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    
    return 0;
}