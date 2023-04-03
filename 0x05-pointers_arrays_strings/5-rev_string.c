#include<stdio.h>
#include<string.h>

/**
 * rev_string - reversing a string
 * @s: arg
 */

void rev_string(char *s)
{
	int i, k;
	char rev;

	k = strlen(s);
	for (i = 0; i < k / 2; i++)
	{
		rev = s[i];
		s[i] = s[k - i - 1];
		s[k - i - 1] = rev;
	}
}
