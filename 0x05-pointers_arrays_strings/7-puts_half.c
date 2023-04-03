#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * puts_half - printing half of the array
 * @str: arg
 */

void puts_half(char *str)
{
	int i, k, n;

	k = strlen(str);
	if (k % 2 == 0)
		n = k / 2;
	else
		n = (k - 1) / 2;
	for (i = n + 1; i < k; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
