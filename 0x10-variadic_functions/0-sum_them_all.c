#include<stdio.h>
#include<stdarg.h>

/**
 * sum_them_all - having the sum the args
 *
 * @n: number of args
 *
 * Return: Result
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int j;
	va_list list;

	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
