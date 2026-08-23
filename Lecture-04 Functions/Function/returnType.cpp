#include <iostream>
using namespace std;

// function definition
void printHello(){
    cout << "Hello, World!\n";
}

int printNo(){
    return 3;
}

int main() {

    // function call// invoke
    printHello();

    int val = printNo();
    cout << "value = " << val << endl;
    
    cout << "value = " << printNo() << endl;
    
    return 0;

}