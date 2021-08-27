#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binpow(int a, int b)
{
    if (b == 0) //base case
        return 1;
    ll res = binpow(a, b / 2); // recursive call
    if (b % 2)                 //If b is odd then
        return res * res * a;
    else //If b is even then
        return res * res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << binpow(a, b);
}