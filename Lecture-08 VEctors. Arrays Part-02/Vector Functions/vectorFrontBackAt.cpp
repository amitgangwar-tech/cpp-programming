// vec.front & vec.back & vec.at
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    
    vec.push_back(3);
    vec.push_back(67);
    vec.push_back(98);

    cout << "After push back size = " << vec.size() << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(0) << endl;

    return 0;
}