#include<stdio.h>
#include<string.h>

/**
 * rev_string - reversing a string
 * @s: arg
 */

void rev_string(char *s)
{
	int i, k;
	char *ss;

	k = strlen(s);
	ss = s;
	for (i = 0; i < k; i++)
	{
		s[i] = ss[k-i-1];
	}
}
