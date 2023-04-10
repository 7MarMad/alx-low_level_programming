#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point, getting the multiplication of 2 numbers
 * @argc: arg
 * @argv: array
 * Return: 0 as success and 1 as fail for not having the arg
 */
int main(int __attribute__((__unused__)) argc, int **argv)
{
	if (*argv[1] == '\0' || *argv[2] == '\0')
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", *argv[1] * *argv[2]);
	return (0);
}
