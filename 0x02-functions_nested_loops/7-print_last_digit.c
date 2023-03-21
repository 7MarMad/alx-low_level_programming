#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * print_last_digit - getting the last digit of a number
 *
 * @n: argumment
 *
 * Return: something
 */
int print_last_digit(int n)
{
	int i;

	i = abs(n);
	i = i % 10;
	_putchar(i + '0');
	return (i);
}
