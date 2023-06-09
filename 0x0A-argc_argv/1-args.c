#include <stdio.h>
#include <stdlib.h>

/**
 * main - getting the number of args that was given
 * @argc: number of args given
 * @argv: array of the args given
 *
 * Return: 0 for success
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
