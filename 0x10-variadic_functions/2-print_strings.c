#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - printing strings passed on to the variadic function
 * @separator: a string to be printed between the strings passed on
 * @n: number of strings passed on
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *s;
	char *ss;

	if (separator == NULL)
		s = "";
	else
		s = separator;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ss = va_arg(args, char *);
		if (ss == NULL)
			ss = "(nil)";
		printf("%s", ss);
		if (i != n - 1)
			printf("%s", s);
	}
	printf("\n");
	va_end(args);
}
