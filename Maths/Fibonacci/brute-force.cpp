//! Recursive Approach. Time Complexity is exponential

#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    return (n <= 1) ? n : (fibo(n - 1) + fibo(n - 2));
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "The " << i + 1 << "th fibonacci number is " << fibo(i) << endl;
    }
}