#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * _memset - seting a number of bytes to a constant byte
 * @s: arg
 * @b: arg
 * @n: arg
 *
 * Return: returning the s header of the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
