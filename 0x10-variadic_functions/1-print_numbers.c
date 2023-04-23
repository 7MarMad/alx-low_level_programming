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
	unsigned int j;
	va_list list;

	if (seperator == NULL)
		return;
	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(list, int));
		if (j != n-1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(list);
}
