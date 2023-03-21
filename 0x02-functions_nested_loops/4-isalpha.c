#include<stdio.h>
#include "main.h"

/**
 * _isalpha - searching for alphabet
 *
 * @c: argumment
 *
 * Return: 1 on success. 0 on failure
 */
int _isalpha(int c)
{
	int i;

	if (isalpha(c) == 0)
		i = 0;
	else
		i = 1;
	return (i);
}
