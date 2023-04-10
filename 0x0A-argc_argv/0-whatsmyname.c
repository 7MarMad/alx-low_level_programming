#include<stdio.h>

/**
 * main - Entry point
 * @argc: number of element in the array that have pointers to strings
 * @argv: the array that have pointers
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	printf("%s", *argv);
	exit(EXIT_SUCCESS);
}
