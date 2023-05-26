#include<stdio.h>
#include<string.h>

/**
 * _is_it - comparing the first element of a string with another last elements
 * @s: first string
 * @c: 2nd string
 * Return: 1 or 0 for being palindrome
 */
int _is_it(char *s, char *c)
{
	if (s[0] != '\0')
	{
		if (s[0] != c[0])
			return (0);
		else
			return (_is_it(s + 1, c - 1));
	}
	else
		return (1);
}

/**
 * is_palindrome - making another string to compare the two
 * @s: the string we are working on
 * Return: final result
 */
int is_palindrome(char *s)
{
	int k;
	char *c;

	c = s;
	k = strlen(c) - 1;
	return (_is_it(s, c + k));
}
