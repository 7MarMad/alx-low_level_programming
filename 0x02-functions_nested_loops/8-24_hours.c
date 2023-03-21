#include<stdio.h>
#include "main.h"

/**
 * jack_bauer - printing all minutes
 *
 */
void jack_bauer(void)
{
	int i, k, l;

	for (l = 0; l < 24; l++)
	{
		for (k = 0; k < 6; k++)
		{
			for (i = 0; i < 6; i++)
			{
				_putchar('l');
				_putchar(':');
				_putchar('k');
				_putchar('i');
				_putchar('\n');
			}
		}
	}
}
