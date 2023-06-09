#include<stdio.h>
#include<string.h>

/**
 * _atoi - getting integers only from a string
 * @s: arg
 * Return: the result (integer) we are looking for
 */

int _atoi(char *s)
{
	int i, k, j, res;
	char rr[30];

	k = strlen(s);
	for (i = 0; i < k; i++)
	{
		if ((s[i] <= '0' && s[i] >= '9') || (s[i] == '+' || s[i] == '-'))
		{
			rr[i] = s[i];
		}
	}
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < i; j++)
		{
			rr[k - i - 1] *=  10;
		}
	}
	for (i = 0; i < k; i++)
		res += rr[i];
	return (res);
}
