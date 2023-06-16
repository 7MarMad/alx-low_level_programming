#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * error - function for errors
 */
void error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * recur_print - using recursion to print with putchar
 * @res: num to print
 */
void recur_print(unsigned long int res)
{
	if (res > 9)
		recur_print(res / 10);
	_putchar('0' + (res % 10));
}
/**
 * main - multiplication of 2 numbers
 * @argc: number of element in argv
 * @argv: array
 * Return: 0 on success and status 98 on finding error
 */
int main(int argc, char **argv)
{
	int i, num1, num2, len_num1, len_num2;
	unsigned long int res;

	if (argc != 3)
		error();
	len_num1 = strlen(argv[1]);
	len_num2 = strlen(argv[2]);
	for (i = 0; i < len_num1; i++)
	{
		if (!isdigit(argv[1][i]))
			error();
	}
	for (i = 0; i < len_num2; i++)
	{
		if (!isdigit(argv[2][i]))
			error();
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;
	recur_print(res);
	_putchar('\n');
	return (0);
}
