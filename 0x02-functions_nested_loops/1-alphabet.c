#include<stdio.h>
#include "main.h"

void print_alphabet(void);

/**
 * print_alphabet - print all the alphabet from a to z
 *
 * Return: no return , printing in screen
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
