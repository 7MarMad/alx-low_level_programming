#include<stdio.h>
#include"main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 3, b = 5, c, d, i, j, s;

	for (i = 1; a * i < 1024; i++)
	{
		c = c + a * i;
	}
	for (j = 1; b * j < 1024; j++)
	{
		d = d + b * j;
	}
		s = c + d;
	printf("%d\n", s);
	return (0);
}
