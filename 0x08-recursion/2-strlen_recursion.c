#include "main.h"

/**
 * _strlen_recursion - getting the length of a string using recursion
 * @s: string to work on
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (s[0] != '\0')
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}
