#include<stdio.h>
#include"main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 3, b = 5, c, d, i = 2, s;

	do
	{
		c = a * i;
		d = b * i;
		s = c + d;
		i++;
		printf("%d %d %d\n", c, d, s);
	}while (S < 1024);
}
