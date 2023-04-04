#include<stdio.h>

/**
 * set_string - setting a pointer to another value
 *
 * @s: arg
 * @to: arg
 */

void set_string(char **s, char *to)
{
	*s = to;
}
