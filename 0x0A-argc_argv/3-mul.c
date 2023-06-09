#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplacation of 2 numbers using argv
 * @argc: number of args in argv
 * @argv: array of argument being passed
 *
 * Return: 0 for success, 1 for not having 2 arguments
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
