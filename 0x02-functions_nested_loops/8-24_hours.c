#include<stdio.h>
#include "main.h"

/**
 * jack_bauer - printing all minutes
 *
 */
void jack_bauer(void)
{
	int i, l;

	for (l = 0; l < 24; l++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar(l + '0');
			_putchar(':');
			_putchar(i + '0');
			_putchar('\n');
		}
	}
}
