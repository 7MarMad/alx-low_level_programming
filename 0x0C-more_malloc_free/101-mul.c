#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * error - printintg error and exiting with status 98
 *
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
 * _isdigit - checking if the string is a pure number
 * @str: string to check
 *
 * Return: 1 for being a number
 */

int _isdigit(char *str)
{
	int i = 0, len;

	len = strlen(str);
	if (str[0] == '-')
		i++;
	for (; i < len; i++)
	{
		if (!(isdigit(str[i])))
			error();
	}
	if (str[0] == '-')
		return (1);
	else
		return (0);
}

/**
 * number_length - getting the length of the number
 * @num: number to check
 *
 * Return: how long
 */

int number_length(int num)
{
	int count = 0;

	if (num >= 1)
	{
		count += number_length(num / 10);
		count++;
	}
	return (count);
}

/**
 * put_in_arr - putting a number in array, each digit in an element
 * @str: number to put in the array
 * @len_num: length of the number
 *
 * Return: pointer to the array
 */

int *put_in_arr(char *str, int len_num)
{
	int *arr, i;

	arr = malloc(len_num * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len_num; i++)
	{
		arr[len_num - i - 1] = str[strlen(str) - i - 1] - '0';
	}
	return (arr);
}

/**
 * print_array - printing the result that is in the array
 * @arr: the array where we are printing from
 * @len: length of the array
 * @sign: sign of the result - or +
 *
 */

void print_array(int *arr, int len, int sign)
{
	int i, l = 0;

	if (sign == 1)
		_putchar('-');
	for (i = 0; i < len; i++)
	{
		if (l == 1 || arr[i] != 0 || i == len - 1)
		{
			_putchar('0' + arr[i]);
			l = 1;
		}
	}
	_putchar('\n');
}

/**
 * _free - freeing the alllocated memory
 * @arr: 2D array
 * @len: width or height of the 2D array
 */
void _free(int **arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		free(arr[len - i - 1]);
	}
	/*free(arr);*/
}

/**
 * add - adding the number after the multiplications
 * @arr: array containing the numbers to add
 * @len1: length of the width
 * @len2: lenght of the height
 *
 * Return: pointer the result in an array
 */

int *add(int **arr, int len1, int len2)
{
	int *ar, carry = 0, res, k, i, j, ini = 0;

	ar = malloc((len1 + len2) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (k = 0; k < len1 + len2; k++)
		ar[k] = ini;
	for (i = 0; i < len1 + len2; i++)
	{
		res = 0;
		for (j = 0; j < len1; j++)
		{
			res += arr[j][i];
		}
		ar[(len1 + len2) - i - 1] = (res + carry) % 10;
		carry = ((res + carry) - ((res + carry) % 10)) / 10;
	}
	/*len_num = number_length(carry);*/
	return (ar);
}

/**
 * result_mul - multiplication of the 2 numbers
 * @arr1: array containing the 1 st number
 * @arr2: array containing the 2 nd number
 * @len1: length of the 1 st array
 * @len2: length of the 2 nd array
 *
 * Return: pointer the final result
 */

int *result_mul(int *arr1, int *arr2, int len1, int len2)
{
	int **arr, *ar, res, carry, i, j, ini = 0, k;

	arr = malloc((len1 + len2) * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		carry = 0;
		arr[i] = malloc((len1 + len2) * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
		for (k = 0; k < len1 + len2; k++)
			arr[i][k] = ini;
		for (j = 0; j < len2; j++)
		{
			res = arr1[len1 - i - 1] * arr2[len2 - j - 1];
			arr[i][j + i] = (res + carry) % 10;
			if (res > 9)
				carry = (res / 10) + (((res % 10) + carry) / 10);
			else
				carry = (res + carry) / 10;
			if (j == len2 - 1)
				arr[i][j + i + 1] = carry;
		}
	}
	ar = add(arr, len1, len2);
	free(arr1);
	free(arr2);
	_free(arr, len1 + len2);
	return (ar);
}

/**
 * main - multiplication of 2 numbers using arrays
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: 0 for success or status 98
 */
int main(int argc, char **argv)
{
	int *arr1, *arr2, *arr, len_num1, len_num2, sign1, sign2;

	if (argc != 3)
		error();
	sign1 = _isdigit(argv[1]);
	sign2 = _isdigit(argv[2]);
	len_num1 = strlen(argv[1]) - sign1;
	len_num2 = strlen(argv[2]) - sign2;
	if (sign1 != sign2)
		sign1 = 1;
	else
		sign1 = 0;
	arr1 = put_in_arr(argv[1], len_num1);
	arr2 = put_in_arr(argv[2], len_num2);
	arr = result_mul(arr1, arr2, len_num1, len_num2);
	print_array(arr, len_num1 + len_num2, sign1);
	free(arr);
	return (0);
}
