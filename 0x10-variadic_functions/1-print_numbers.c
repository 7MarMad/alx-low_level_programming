#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - printing the numbers with a string in between
 * @separator: string to be printed between the numbers
 * @n: number of number passed on as args
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *s;

	if (separator == NULL)
		s = "";
	else
		s = separator;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			printf("%s", s);
	}
	printf("\n");
	va_end(args);
}
