#include "main.h"

/**
 * _sqrt_recursion2 - getting the sqrt of a number with recursion
 * @n: number to work on
 * @i: the potential result
 *
 * Return: result of sqrt, or -1 for n not having a natural square root
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i <= n)
	{
		if (i * i == n)
			return (i);
		else
			return (_sqrt_recursion2(n, i + 1));
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - getting the first part for the recur function
 * @n: number to work on
 *
 * Return: result, or -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt_recursion2(n, i));
}
