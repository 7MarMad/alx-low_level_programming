#include<stdio.h>
#include<string.h>

/**
 * _strspn - calculating the maching characters
 * @s: arg
 * @accept: arg
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	len = strspn(s, accept);
	return (len);
}
