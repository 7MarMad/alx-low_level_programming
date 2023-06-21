#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - 5 operation using function pointers instead of switch func
 *
 * @argc: number of args passed on
 * @argv: array containing args
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
/*	char s[] = {'+', '-', '*', '/', '%'};*/
	char *dd;
	int num1, num2, res;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	dd = argv[2];
	func = get_op_func(dd);
/*
 * if (dd != '+' && dd != '-' && dd != '*' && dd != '/' && dd != '%' &&
	dd != '\'+\'' && dd != '\'-\'' && dd != '\'*\'' && dd != '\'/\''
	&& dd != '\'%\'')
	*/
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((dd[0] == '/' || dd[0] == '%' || dd[1] == '/' || dd[1] == '%')
	&& num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (*func)(num1, num2);
	printf("%d\n", res);
	return (0);
}
