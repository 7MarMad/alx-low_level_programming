#include<stdlib.h>
#include<string.h>
/**
 * word_count - counting the word inside the string
 * @str: the string we are counting in
 * @len_str: length of the string
 * Return: the result of the count
 */
int word_count(char *str, int len_str)
{
	int num_wr = 0, i = 0;

	while (i <= len_str)
	{
		if (i != 0 && str[i] == ' ' && str[i - 1] != ' ')
			num_wr++;
		if (i != 0 && str[i] == '\0' && str[i - 1] != ' ')
			num_wr++;
		i++;
	}
	return (num_wr);
}

/**
 * strtow - splitting a string
 * @str: string to split
 * Return: 2D array as each string has one word
 */
char **strtow(char *str)
{
	char **arr2d;
	int i = 0, j = 0, mm, k = 0, len_str, num_wr = 0, lensttr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	len_str = strlen(str);
	num_wr = word_count(str, len_str);
	if (num_wr == 0)
		return (NULL);
	arr2d = (char **)malloc(num_wr * sizeof(char *) + 1);
	if (arr2d == NULL)
		return (NULL);
	for (i = 0; i < num_wr; i++)
	{
		lensttr = 0, mm = k;
		while (lensttr == 0)
		{
			if (str[k] == ' ')
				k++, mm++;
			while (str[k] != ' ' && str[k] != '\0')
			{
				lensttr++, k++;
			}
		}
		arr2d[i] = malloc(lensttr * sizeof(char) + 1);
		if (arr2d[i] == NULL)
			return (NULL);
		for (j = 0; j < lensttr; j++)
		{
			arr2d[i][j] = str[j + mm];
		}
	}
	arr2d[num_wr] = malloc(sizeof(NULL) - 1);
	arr2d[num_wr] = NULL;
	return (arr2d);
}
