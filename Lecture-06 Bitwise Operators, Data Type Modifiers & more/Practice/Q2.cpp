#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    int n;
    cin >> n;

    if(isPowerOf2(n))
        cout << "Power of 2";
    else
        cout << "Not a power of 2";

    return 0;
}