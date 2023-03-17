#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = 'z';

	while (d >= 'a')
	{
		putchar(d);
		d--;
	}
	putchar('\n');
	return (0);
}
