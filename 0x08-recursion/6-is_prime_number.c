#include "main.h"
#include <math.h>

/**
 * prime_number - finding if number is prime or not
 * @n: number we are testing
 * @i: possible devider
 * @k: redusing the range
 *
 * Return: 1 for n being a prime, 0 for n being not a prime
 */
int prime_number(int n, int i, int k)
{
	int m;

	m = n / i;
	if (m * i == n)
		return (0);
	if (i >= k)
		return (1);
	else
		return (prime_number(n, i + 2, k));
}
/**
 * is_prime_number - finding if number is prime or not
 * @n: the number to work on
 *
 * Return: 1 for n being a prime, 0 for n being not a prime
 */
int is_prime_number(int n)
{
	int i = 3, k;

	if (n <= 1)
		return (0);
	k = n / 2;
	if (k % 2 != 0)
		k++;
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0)
		return (0);
	if (k * k == n)
		return (0);
	else
		return (prime_number(n, i, k + 1));
}
