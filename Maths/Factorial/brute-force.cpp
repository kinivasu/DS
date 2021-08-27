//* https://www.geeksforgeeks.org/one-line-function-for-factorial-of-a-number/
//! Recursive Approach
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int main()
{
    int num = 5;
    printf("Factorial of %d is %d", num, fact(num));
    return 0;
}