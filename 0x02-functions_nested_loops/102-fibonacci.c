#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1, b = 2, c, i;

	_putchar(a + '0');
	_putchar(b + '0');
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		_putchar(c + '0');
		a = b;
		b = c;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
