#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - Entry point, getting the multiplication of 2 numbers
 * @argc: arg
 * @argv: array
 * Return: 0 as success and 1 as fail for not having the arg
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
