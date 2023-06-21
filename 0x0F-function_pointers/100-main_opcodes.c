#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing the opcode of the main
 * @argc: number of args passed  to the program
 * @argv: array containing args
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int num_byte, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_byte = atoi(argv[1]);
	if (num_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < num_byte; i++)
	{
		printf("%02hhx", arr[i]);
		if (i != num_byte - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
