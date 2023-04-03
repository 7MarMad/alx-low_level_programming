#include<stdio.h>
#include "main.h"
#include<string.h>

/**
 * print_rev - printing a string in reverse
 * @s: arg
 * */

void print_rev(char *s)
{
	int i, k;

	k = strlen(s);
	for (i = k; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}	
