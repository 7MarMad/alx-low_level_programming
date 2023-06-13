#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinate 2 strings in one string
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to the new string containing the 2 strings
 */
char *str_concat(char *s1, char *s2)
{
	int len, len1 = 0, len2 = 0;
	char *str;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	len = len1 + len2;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (len1 != 0)
		memcpy(str, s1, len1);
	if (len2 != 0)
		memcpy(str + len1, s2, len2);
	return (str);
}
