#include<stdio.h>

/**
 * _strspn - calculating the maching characters
 * @s: arg
 * @accept: arg
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
			}
		}
		if (len == 0)
			break;
	}
	return (len);
}
