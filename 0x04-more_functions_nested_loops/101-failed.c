#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_number - printing a number with putchar only
 * @n: arg
 */

void print_number(int n)
{
	int i, d, cnt = 0, testval;

	d = n;
	while (d > 9)
	{
		d /= 10;
		cnt++;
	}
	printf("cnt for this n is %d\n", cnt);
	for (i = cnt; i > 0; i--)
	{
		_putchar((n / pow(10, i)) + '0');
		//testval = n / pow(10, i);
		///printf("n after division %d", testval);
	}
	_putchar(n % 10 + '0');
}
