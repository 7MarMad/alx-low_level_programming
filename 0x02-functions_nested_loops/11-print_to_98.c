#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - blala
 *
 * @n: arg
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 98)
	{
		for (n; n >= 98; n--)
		{
			if (n < 100)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n / 100 + '0');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (n; n <= 98; n++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
