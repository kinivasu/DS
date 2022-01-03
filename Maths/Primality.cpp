//! Check for Prime Number

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x <= 1) //? Negative or zero or 1
        return false;
    for (int i = 2; i <= sqrt(x); i++) //! NOTE THE <= in this loop, very imp
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    cout << isPrime(1) << endl;
    cout << isPrime(2) << endl;
    cout << isPrime(3) << endl;
    cout << isPrime(4) << endl;
    cout << isPrime(5) << endl;
    cout << isPrime(6) << endl;
    cout << isPrime(7) << endl;
    cout << isPrime(8) << endl;
}
