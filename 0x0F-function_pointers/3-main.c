#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "3-calc.h"
/**
 * main - main function of a operation of two numbers
 *
 * @argc: size of array
 * @argv: array of args
 *
 * Return: as exit status
 */
int main(int argc, char **argv)
{
	int num1, num2, len_op;
	op_t opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	len_op = strlen(argv[2]);
	printf("strlen %d\n", len_op);
	if ((len_op != 1) && argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("%s\n", argv[2]);
		printf("Error2\n");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	return (0);
}
