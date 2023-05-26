#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @argc: lenth of array argv
 * @argv: array of arg
 * Return: 0 as success
 */
int main(int argc, char **argv)
{
	while (argc > 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	exit(EXIT_SUCCESS);
}
