#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    int x = 1;

    while(x <= n)
    {
        if(x == n)
            return true;

        x = x * 2;
    }

    return false;
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