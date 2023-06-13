#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenating args of the program
 * @ac: number of args
 * @av: 2D array containing args
 *
 * Return: string containing all args
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0, argc, ac2, prev_len = 0, cur_len;

	if (ac == 0 || av == NULL)
		return (NULL);
	argc = ac;
	ac2 = ac;
	while (argc > 0)
	{
		if (av[argc - 1] != NULL)
		{
			len += strlen(av[argc - 1]);
			len++;
		}
		argc--;
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (ac > 0)
	{
		if (av[ac2 - ac] != NULL)
		{
			cur_len = strlen(av[ac2 - ac]);
			memcpy(str + prev_len, av[ac2 - ac], cur_len);
			prev_len += cur_len;
			str[prev_len++] = '\n';
		}
		ac--;
	}
	return (str);
}
