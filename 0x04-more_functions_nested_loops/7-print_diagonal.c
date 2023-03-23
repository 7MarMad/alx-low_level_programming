#include<stdio.h>
#include"main.h"

/**
 * print_diagonal - hj
 * @n: arg
 */
void print_diagonal(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j ; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
