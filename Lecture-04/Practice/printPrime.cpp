#include <iostream>
using namespace std;

bool prime(int n)
{
    bool isPrime = true;

    for(int i = 2; i <= n - 1; i++)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        if(prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}