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
	int i;
	char *tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			tmp = (s + i);
			break;
		}
		else
			tmp = NULL;
	}
	return (tmp);
}
