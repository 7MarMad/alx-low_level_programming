#include<stdio.h>

/**
 * _prime_number - finding if a number is prime or not
 * @n: the number we are testing
 * @i: seeing if i divide n
 * @k: using sqrt(n) to minimize the code range
 * Return: 1 or 0 for being a prime number or not
 *
 */
int _prime_number(int n, int i, int k)
{
	int j;

	j = n / i;
	if (j * i == n)
		return (0);
	else if (i >= k)
		return (1);
	else
		return (_prime_number(n, i + 2, k));
}
/**
 * is_prime_number - first cases before going the 2nd function
 * @n: the number we are working on
 * Return: 1 or 0 for being a prime number or not
 *
 */
int is_prime_number(int n)
{
	int k, i = 3;

	k = n / 2;
	if (n <= 1)
		return (0);
	else if ((n % 2 == 0) || (n == 3))
		return (0);
	else if (k * 2 == n)
		return (0);
	else
		return (_prime_number(n, i, k + 1));
}
