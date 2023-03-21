#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - repeating the printing
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 3; i++)
	{
		c = 'a';
		while (c < 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
