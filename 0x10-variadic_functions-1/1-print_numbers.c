#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

/**
 * print_numbers - printing numbers with a variadic function
 *
 * @seperator: a string to be printed between numbers
 * @n: number of args
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int j, k = 0;
	va_list list;

	if (seperator == NULL)
		k = 1;
	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(list, int));
		if (j != n - 1 && k == 0)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(list);
}
