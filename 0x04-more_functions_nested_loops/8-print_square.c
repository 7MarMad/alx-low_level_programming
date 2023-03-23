#include<stdio.h>
#include"main.h"

/**
 * print_square - square printing
 * @size: arg
 */

void print_square(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
