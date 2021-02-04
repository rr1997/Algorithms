#include<bits/stdc++.h>
using namespace std;


// Fermat’s little theorem

//Fermat’s little theorem states that if p is a prime number,
//then for any integer a, the number a p – a is an integer multiple of p.


// a^p = a %p

// a^-1 == a^m-2(mod m)


// To compute x raised to power y under modulo m
int power(int x, unsigned int y, unsigned int m);

// Function to find modular inverse of a under modulo m
// Assumption: m is prime
void modInverse(int a, int m)
{
	if (__gcd(a, m) != 1)
		cout << "Inverse doesn't exist";

	else {

		// If a and m are relatively prime, then
		// modulo inverse is a^(m-2) mode m
		cout << "Modular multiplicative inverse is " << power(a, m - 2, m);
	}
}

// To compute x^y under modulo m
int power(int x, unsigned int y, unsigned int m)
{
	if (y == 0)
		return 1;
	int p = power(x, y / 2, m) % m;
	p = (p * p) % m;

	return (y % 2 == 0) ? p : (x * p) % m;
}

// Driver Program
int main()
{
	int a, m;
	cin >> a >> m;
	modInverse(a, m);
	return 0;
}