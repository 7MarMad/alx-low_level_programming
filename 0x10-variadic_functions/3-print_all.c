#include<stdio.h>
#include<stdarg.h>

/**
 * counting - counting the parameters of the string
 * @p: the string
 * Return: result
 */
int counting(const char *p)
{
	int s = 0;

	while (*p != '\0')
	{
		switch (p[0])
		{
			case 'c':
				s++;
				p++;
				continue;
			case 'i':
				s++;
				p++;
				continue;
			case 'f':
				s++;
				p++;
				continue;
			case 's':
				s++;
				p++;
				continue;
		}
		p++;
	}
	return (s);
}

/**
 * print_all - printing all arguments nomatter what are there types
 * @format: the string to get parameters from
 */
void print_all(const char * const format, ...)
{
	int count = 0, coun = 0, track = 1;
	const char *p, *pp;
	va_list list;

	pp = format;
	p = format;
	count = counting(pp);
	va_start(list, format);
	while (*p != '\0')
	{
		if (coun != count && coun == track)
		{
			printf(", ");
			track++;
		}
		switch (p[0])
		{
			case 'i':
				coun++;
				printf("%d", va_arg(list, int));
				p++;
				continue;
			case 'c':
				coun++;
				printf("%c", va_arg(list, int));
				p++;
				continue;
			case 'f':
				coun++;
				printf("%f", va_arg(list, double));
				p++;
				continue;
			case 's':
				coun++;
				printf("%s", va_arg(list, char*));
				p++;
				continue;
		}
		p++;
	}
	printf("\n");
	va_end(list);
