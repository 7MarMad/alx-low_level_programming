#include <stdlib.h>
#include "main.h"

/**
 * print_binary - printing an integer as a binary
 *
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	unsigned int j = 0, m;

	m = n;
	if (m == 0)
		_putchar('0');
	while (m > 0)
	{
		m >>= 1;
		j++;
	}
	while (j > 0)
	{
		j--;
		if ((n >> j) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
