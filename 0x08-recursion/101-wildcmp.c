#include<stdio.h>

/**
 * wildcmp - comparing in cheating way and in an extreme way
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 for false, 1 for being (half) the same
 */
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	else if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 2));
	else if (s2[0] == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
