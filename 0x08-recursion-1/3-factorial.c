#include<stdio.h>

/**
 * factorial - calculating the factorial of a number with recursion
 * @n: number to operaate on
 * Return: the result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
