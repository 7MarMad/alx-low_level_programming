#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing the arguments passed in the command line
 * @argc: number of args being passed
 * @argv: array having the args
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
