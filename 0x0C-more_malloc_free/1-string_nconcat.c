#include<stdlib.h>
#include<string.h>

/**
 * string_nconcat - concatinating 2 strings with taking only n bytes from the 2nd string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ss;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n < len2)
		len2 = n;
	ss = malloc(len1 + n + 1)
	if (ss == NULL)
		return (NULL);
	if (len1 != 0)
		memcpy(ss, s1, len1);
	if (len2 != 0)
		memcpy(ss + len1, s2, len2);
	return (ss);
}
