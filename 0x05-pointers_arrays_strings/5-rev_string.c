#include<stdio.h>
#include<string.h>

/**
 * rev_string - reversing a string
 * @s: arg
 */

void rev_string(char *s)
{
	int i, k;

	k = strlen(s);
	char ss[k];
	for (i = 0; i < k; i++)
	{
		ss[i] = s[i];
	}
	for (i = 0; i < k; i++)
	{
		s[i] = ss[k-i-1];
	}
}
