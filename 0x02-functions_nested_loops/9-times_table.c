#include<stdio.h>
#include "main.h"

/**
 * times_table - another
 */
void times_table(void)
{
	int i, j, h;

	for (j = 0; j < 10; j++)
	{
		for (i =0; i < 10; i++)
		{
			h = i * j;
			_putchar(h + '0');
			_putchar(',');
			_putchar(' ');
			if (h < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
