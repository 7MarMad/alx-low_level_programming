#include<stdio.h>

/**
 * _sqrt_recursion2 - finding the natural square root of a number
 * @n: the number we are working on
 * @i: the guess result
 * Return: -1 as fail or the result
 *
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i <= n)
	{
		if (i * i == n)
			return (i);
		else if (i * i < n)
			return (_sqrt_recursion2(n, i + 1));
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - finding the natural square root
 * @n: arg
 * Return: result or -1 as not there
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt_recursion(n, i));
}
