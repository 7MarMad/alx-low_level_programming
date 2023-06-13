#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicating a string in a new allocated memory
 * @str: string to duplicate
 *
 * Return: pointer the new allocated memory or null on failure
 */
char *_strdup(char *str)
{
	char *dupstr;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dupstr = malloc((len * sizeof(char)) + 1);
	if (dupstr == NULL)
		return (NULL);
	return (memcpy(dupstr, str, len));
}
