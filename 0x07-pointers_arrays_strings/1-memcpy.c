#include<stdio.h>
#include<string.h>

/**
 * _memcpy - copying a number of bytes from an array to another
 *
 * @dest: arg
 * @src: arg
 * @n: N of bytes
 *
 * Return: the identifier of the array is returned
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
