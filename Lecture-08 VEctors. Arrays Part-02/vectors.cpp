#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 6, 9};
    cout << vec[0] << endl;

    vector<int> vec1 (3, 6);
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;

    vector<int> vec2 (5, 8);
    for(int i : vec2){
        cout << i << endl;
    }

    vector<char> vec3 = {'a', 'b', 'c', 'd', 'e'};
    for(char val : vec3){
        cout << val << endl;
    }

    return 0;
}
