#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c = 'a';

	for(i = 0; i < 10; i++)
	{
		putchar('0'+i);
	}
	while (c <= 'f')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}