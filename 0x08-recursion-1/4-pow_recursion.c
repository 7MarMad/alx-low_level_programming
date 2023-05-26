#include<stdio.h>

/**
 * _pow_recursion - getting the power of 2 numbers with recursion
 * @x: base
 * @y: exponent
 * Return: Result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
