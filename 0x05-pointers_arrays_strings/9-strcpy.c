#include<stdio.h>
#include<string.h>

/**
 * _strcpy - copying a string
 * @dest: arg
 * @src: arg
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src){
	int i, k;

	k = strlen(src);
	for (i = 0; i <= k; i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}
