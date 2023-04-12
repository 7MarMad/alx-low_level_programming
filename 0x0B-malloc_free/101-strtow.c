#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
	while (i < len_str)
	{
		if ((i != 0 && str[i] == ' ' && str[i - 1] != ' ') || str[i] == '\0')
			num_wr++;
		i++;
	}
	arr2d = malloc(num_wr * sizeof(char *) + 1);
	if (arr2d == NULL)
		return (NULL);
	for (i = 0; i < num_wr; i++)
	{
		lensttr = 0;
		mm = k;
		while (str[k] != ' ' || str[k] != '\0')
		{
			lensttr++;
			k++;
		}
		arr2d[i] = malloc(lensttr * sizeof(char) + 1);
		if (arr2d[i] == NULL)
			return (NULL);
		for (j = 0; j < lensttr; j++)
		{
			arr2d[i][j] = str[j + mm];
		}
		if (k != 0 && str[k] == ' ' && str[k - 1] == ' ' && str[k] != '\0')
		{
			k++;
		}
	}
	return (arr2d);
}
