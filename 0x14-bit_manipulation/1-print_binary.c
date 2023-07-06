#include <stdlib.h>
#include "main.h"

/**
 * print_binary - printing the binary of a decimal (an integer)
 * @n: the integere to print its binary representation
 *
 */
void print_binary(unsigned long int n)
{
	int num, i = 0;

	if (n == 0)
		_putchar('0');
	num = n;
	while (num > 0)
	{
		num >>= 1;
		i++;
	}
	while (i != 0)
	{
		i--;
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
