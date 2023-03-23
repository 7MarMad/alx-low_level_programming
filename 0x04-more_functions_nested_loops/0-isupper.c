#include<stdio.h>
#include "main.h"

/**
 * _isupper - checking for uppercase
 * @c: arg
 * Return: an interger for 1 or 0.
 */
int _isupper(int c)
{
	int i;

	if (isupper(c) == 0)
	{
		i = 0;
	}
	else
		i = 1;
	return (i);
}
