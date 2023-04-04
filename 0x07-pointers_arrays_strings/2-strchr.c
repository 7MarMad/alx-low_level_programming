#include<stdio.h>
#include<string.h>

/**
 * _strchr - finding a specific character in a string
 * @s: arg
 * @c: the arg to be found
 *
 * Return: the identifier of the array
 */

char *_strchr(char *s, char c)
{
	char *tmp;

	tmp = strchr(s, c);
	return (tmp);
}
