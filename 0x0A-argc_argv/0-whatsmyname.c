#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @argc: number of element in the array that have pointers to strings
 * @argv: the array that have pointers
 * Return: 0 as success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s", *argv);
	exit(EXIT_SUCCESS);
}
