// student details in input

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    string city;

    cout << "Name: ";
    getline(cin, name);

    cout << "Age: ";
    cin >> age;

    cout << "City: ";
    cin >> city;
    
    return 0;
}