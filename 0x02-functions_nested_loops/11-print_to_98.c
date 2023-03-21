#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - blala
 *
 * @n: arg
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i / 100 != 0)
			{
				_putchar(i / 100 + '0');
			}
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
