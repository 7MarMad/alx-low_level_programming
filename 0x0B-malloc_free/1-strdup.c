#include<stdlib.h>
#include<string.h>

/**
 * _strdup - duplicating a string to another in a new memory allocated
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ar, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	ar = malloc(len + 1);
	if (ar == NULL)
		return (NULL);
	return (memcpy(ar, str, len));
}
