//#include <iostream>
//#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of digits in Decimal form is: " << floor(log10(n) + 1) << endl; // Eazy peezy (log10(n)+1)
    cout << "Number of bits in Binary form is: " << floor(log2(n) + 1) << endl;     // Eazy peezy (log2(n)+1)
}