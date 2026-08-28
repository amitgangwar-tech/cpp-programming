// vector.push_back
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    cout << "size = " << vec.size() << endl;
    vec.push_back(3);
    vec.push_back(67);
    vec.push_back(98);

    cout << "After push back size = " << vec.size() << endl;

    for(int val : vec){
        cout << val << endl;
    }

    return 0;
}