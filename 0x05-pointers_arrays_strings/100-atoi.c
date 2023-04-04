#include<stdio.h>
#include<string.h>

/**
 * _atoi - getting integers only from a string
 * @s: arg
 * Return: the result (integer) we are looking for
 */

int _atoi(char *s)
{
	int i, k;
	char sign;
	char *rr;

	k = strlen(s);
	for (i = 0; i < k; i++)
	{
		if ((s[i] <= '0' && s[i] >= '9') || (s[i] == '+' || s[i] == '-'))
		{
			if (s[i] == '+' || s[i] == '-')
				sign = s[i];
		rr[i] = s[i];
	}
