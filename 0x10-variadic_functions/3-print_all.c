#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - printing all the strings passed on depending on the format
 * @format: a string containing a character helping in knowing the type of arg
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char * const s = format;
	char *ss, sl[] = {'c', 'i', 'f', 's'};
	int j, i = 0;

	va_start(args, format);
	while (s[i] != '\0')
	{
		j = 0;
		switch (s[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				ss = va_arg(args, char *);
				if (ss == NULL)
					printf("(nil)");
				else
					printf("%s", ss);
				break;
		}
		while (j < 4)
		{
			if (s[i + 1] == sl[j])
			{
				printf(", ");
				j = 4;
			}
			j++;
		}
		i++;
	}
	printf("\n"), va_end(args);
}
