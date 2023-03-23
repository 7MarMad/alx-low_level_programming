#include<stdio.h>
#include "main.h"

/**
 * print_number - printing a number with recursion
 * @n: arg
 */

void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
