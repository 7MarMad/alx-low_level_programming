#include<stdio.h>
#include "main.h"
#include<string.h>

/**
 * puts2 - printing characters with even index
 * @str: arg
 */

void puts2(char *str)
{
	int i, k;

	k = strlen(str);
	for (i = 0; i < k; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
