#include <stdarg.h>

/**
 * sum_them_all - sum of all args numbers passed on to the function
 * @n: number of args passed on
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
