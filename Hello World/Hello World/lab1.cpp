#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	// Replace this line with your code (have fun!).
	int gcd = 0;
	int num = 0;
	if (a < b ? gcd = a : gcd = b) {
		if (gcd = a) {
			while (gcd > 0) {
				if (b % gcd == 0)
					return gcd;
				gcd--;
			}
		} else {
			while (gcd > 0) {
				if (a % gcd == 0)
					return gcd;
				gcd--;
			}
		}
	}
	return 0;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	// Replace this line with your code (challenge: do this with recursion!).
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}
