#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @argc: arg
 * @argv: array
 * Return: 0 as success
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
