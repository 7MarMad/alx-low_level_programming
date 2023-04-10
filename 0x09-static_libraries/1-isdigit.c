#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * _isdigit - finding digits
 * @c: arg
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int i;

	if (isdigit(c) == 0)
		i = 0;
	else
		i = 1;

	return (i);
}
