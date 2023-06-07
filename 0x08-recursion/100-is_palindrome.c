#include "main.h"
#include <string.h>

/**
 * _is_it - finding if 2 strings have the same characters
 * @s: 1st string
 * @c: 2nd string
 *
 * Return: 1 for the 2 strings having the same characters, 0 if not
 */
int _is_it(char *s, char *c)
{
	if (s[0] != c[0])
		return (0);
	if (s[0] == '\0')
		return (1);
	else
		return (_is_it(s + 1, c - 1));
}
/**
 * is_palindrome - copying the string and flipping it
 * @s: the string to check
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int k;
	char *c;

	c = s;
	k = strlen(c) - 1;
	return (_is_it(s, c + k));
}
