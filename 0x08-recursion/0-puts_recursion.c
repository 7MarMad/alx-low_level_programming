#include<stdio.h>
#include"main.h"

/**
 * _puts_recursion - writing the funtion puts with recursion
 * @s: string to work on
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
