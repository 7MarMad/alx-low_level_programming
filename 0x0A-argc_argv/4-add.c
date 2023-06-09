#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adding numbers
 * @argc: number of args
 * @argv: array contaning args
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char **argv)
{
	int sum = 0, len;

	while (--argc)
	{
		len = strlen(argv[argc]);
		while (len > 0)
		{
			if (isdigit(argv[argc][len - 1]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			len--;
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
