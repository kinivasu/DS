#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << "\n";
	cout << "The LCM of " << a << " and " << b << " is " << (a / gcd(a, b)) * b << "\n";
}

//* Alter
// int gcd (int a, int b) {
//     return b ? gcd (b, a % b) : a;
// }