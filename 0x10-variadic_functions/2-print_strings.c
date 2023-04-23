#include<stdio.h>
#include<stdarg.h>

/**
 * print_strings - printfing a number of strings with variadic function
 *
 * @seperator: the string between strings
 * @n: number of strings to be printed
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list1, list2;

	if (seperator == NULL)
		return;
	va_start(list1, n);
	va_start(list2, n);
	for (j = 0; j < n; j++)
	{
		if (va_arg(list1, char *) == NULL)
		{
			printf("(nil)");
			va_arg(list2, char *);
		}
		else
			printf("%s", va_arg(list2, char *));
		if (j != n-1)
			printf("%s", seperator);
	}
	printf("\n");
}
