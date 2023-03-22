#include<stdio.h>
#include "main.h"

/**
 * times_table - another
 *
 * @n: arg
 */
void print_times_table(int n)
{
	int i, j, h;

	for (j = 0; j < (n + 1); j++)
	{
		for (i = 0; i < (n + 1); i++)
		{
			h = i * j;
			if (i != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (h < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (h < 100)
					_putchar(' ');
			}
			if (h < 10)
				_putchar(h + '0');
			else if (h < 100)
			{
				_putchar(h / 10 + '0');
				_putchar(h % 10 + '0');
			}
			else
			{
				_putchar(h / 100 + '0');
				_putchar(h / 10 + '0');
				_putchar(h % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
