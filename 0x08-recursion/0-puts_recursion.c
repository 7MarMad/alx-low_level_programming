#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - writing a string with a character each time with recur
 * @s: argument, string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
