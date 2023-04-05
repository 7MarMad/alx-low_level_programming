#include<stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returning the length of a string with recursion
 * @s: string to work on
 * Return: the length we are looking for
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[0] != '\0')
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
