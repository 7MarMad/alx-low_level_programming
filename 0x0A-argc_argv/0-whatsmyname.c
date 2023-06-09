#include <stdio.h>
#include <stdlib.h>

/**
 * main - writing the name of the file in which the program is in
 * @argc: the number of arg taken
 * @argv: the array containing the args
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
