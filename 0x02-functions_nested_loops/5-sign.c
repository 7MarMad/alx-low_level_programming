#include<stdio.h>
#include "main.h"

/**
 * print_sign - printing
 *
 * @n: argumment
 *
 * Return: on number being + 1. being - -1 . being zero is 0
 */
int print_sign(int n)
{
	int i;

	if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = 1;
		_putchar('+');
	}
	return (i);
}
