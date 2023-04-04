#include<stdio.h>
#include<string.h>

/**
 * _strpbrk - finding the first mach in a string with an 'accept' string
 *
 * @s: arg
 * @accept: arg
 *
 * Return: returning a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
