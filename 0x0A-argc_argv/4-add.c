#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adding numbers
 * @argc: number of args
 * @argv: array contaning args
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char **argv)
{
	int sum = 0;

	while (--argc)
	{
		if (isdigit(argv[argc][0]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
