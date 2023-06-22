#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - printing all the strings passed on depending on the format
 * @format: a string containing a character helping in knowing the type of arg
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *s;
	char *ss, *com = "";
	int i = 0;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	s = format;
	va_start(args, format);
	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case 'c':
				printf("%s%c", com, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", com, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", com, va_arg(args, double));
				break;
			case 's':
				ss = va_arg(args, char *);
				if (ss == NULL)
					ss = "(nil)";
				printf("%s%s", com, ss);
				break;
			default:
				i++;
				continue;
		}
		com = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
