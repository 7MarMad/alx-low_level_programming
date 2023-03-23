#include<stdio.h>
#include"main.h"

/**
 * print_triangle - jjj
 * @size: arg
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = size - 1; i >= j; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i <= j; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
