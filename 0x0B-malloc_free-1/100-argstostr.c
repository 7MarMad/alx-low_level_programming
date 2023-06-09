#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * argstostr - concatinating multiple args
 * @ac: number of arg to concat
 * @av: 2D array
 * Return: to the string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, ac2, cur_len, prev_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ac2 = ac;
	while (ac2 > 0)
	{
		len = len + strlen(av[--ac2]);
	}
	s = malloc(((len + ac) * sizeof(char)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		cur_len = strlen(av[i]);
		memcpy(s + prev_len, av[i], cur_len);
		prev_len += cur_len;
		s[prev_len++] = '\n';
	}
	return (s);
}
