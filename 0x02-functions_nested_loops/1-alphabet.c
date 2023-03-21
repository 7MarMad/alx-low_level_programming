#include<stdio.h>
#include "main.h"

void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/*
 *  int main(void)
 *{
 *	print_alphabet();
 *	return (0);
 *}
 */

void print_alphabet()
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
