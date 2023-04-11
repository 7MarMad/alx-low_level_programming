#include<stdlib.h>
#include<string.h>

/**
 * str_concat - concatinating 2 strings in a new one
 * @s1: string 1
 * @s2: string 2
 * Return: Null on failure and pointer on success
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int len1, len2;

	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	ar = malloc(len1 + len2 + 1);
	if (len1 != 0)
		memcpy(ar, s1, len1);
	if (len2 != 0)
		memcpy(ar + len1, s2, len2);
	return (ar);
}
