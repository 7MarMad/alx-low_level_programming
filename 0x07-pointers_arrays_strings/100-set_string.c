#include<stdio.h>

/**
 * set_string - setting a pointer to another value
 *
 * @s: arg
 * @to: arg
 */

void set_string(char **s, char *to)
{
/*	int i;

	for (i = 0; to[i] != '\0'; i++)
	{
		*s[i] = to[i];
	}*/
	*s = to;
}
