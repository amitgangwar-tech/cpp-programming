#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    string city;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Name = " << name << "\n";

    cout << "Enter Age: ";
    cin >> age;
    cout << "Age = " << age << "\n";

    cout << "Enter City: ";
    cin >> city;
    cout << "City = " << city << "\n";
    
    return 0;

}
