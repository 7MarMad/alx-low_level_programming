#include<stdio.h>
#include"main.h"

/**
 * print_triangle - jjj
 * @size: arg
 */
void print_triangle(int size)
{
	int i, j, k;

	for (j = 0; j < size; j++)
	{
		for (i = size - 1; i >= j; i--)
		{
			_putchar(' ');
		}
		for (k = size - j - 1; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
