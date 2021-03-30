// C++ program to find GCD of two numbers such that
// the second number can be very large.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// function to find gcd of two integer numbers
ll gcd(ll a, ll b)
{
	if (!a)
	return b;
	return gcd(b%a,a);
}

// Here 'a' is integer and 'b' is string.
// The idea is to make the second number (represented
// as b) less than and equal to first number by
// calculating its mod with first integer number
// using basic mathematics
ll reduceB(ll a, char b[])
{

	ll mod = 0;


	for (int i=0; i<strlen(b); i++)
		mod = (mod*10 + b[i] - '0')%a;

	return mod;
}


ll gcdLarge(ll a, char b[])
{

	ll num = reduceB(a, b);

	return gcd(a, num);
}


int main()
{

	ll a = 3;

	char b[] = "132";
	if (a == 0)
		cout << b<<2;
	else
		cout << gcdLarge(a, b);

	return 0;
}
