#include <stdlib.h>
#include <string.h>

/**
 * wrd_count - counting the words in the string
 * @str: string where we count
 * 
 * Return: number of words
 */
int wrd_count(char *str)
{
	int count = 0, i = 0;

	do
	{
		if (i != 0 && str[i] == ' ' && str[i - 1] != ' ')
			count++;
		if (i != 0 && str[i] == '\0' && str[i - 1] != ' ')
			count++;
		i++;
	}while (str[i - 1] != '\0');
	return (count);
}

/**
 * strtow - splitting a string into words
 * @str: string to split
 *
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **arr;
	int count, i, lenwrd, m, k = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	count = wrd_count(str);
	arr = malloc((count * sizeof(char *)) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		lenwrd = 0, m = k;
		while (lenwrd == 0)
		{
			if (str[k] == ' ')
				k++, m++;
			while (str[k] != ' ' && str[k] != '\0')
				lenwrd++, k++;
		}

		arr[i] = malloc((lenwrd * sizeof(char)) + 1);
		if (arr[i] == NULL)
		{
			while (i > 0)
				free(arr[i - 1]);
			free (arr);
			return (NULL);
		}
		memcpy(arr[i], str + m, lenwrd);
	}
	arr[count] = malloc(sizeof(NULL));
	arr[count] = NULL;
	return (arr);
}
