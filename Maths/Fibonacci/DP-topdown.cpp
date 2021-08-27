#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;

    int dp[n] = {-1};

    // temporary variables to store
    //  values of fib(n-1) & fib(n-2)
    int first, second;

    if (dp[n - 1] != -1)
        first = dp[n - 1];
    else
        first = fib(n - 1);

    if (dp[n - 2] != -1)
        second = dp[n - 2];
    else
        second = fib(n - 2);

    // memoization
    return dp[n] = first + second;
}

// Driver Code
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << fib(i) << endl;
    }
    // cout << fib(10);
    getchar();
    return 0;
}
