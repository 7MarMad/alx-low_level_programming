#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 90; i++)
	{
		if (i / 10 != i % 10)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
			if (i % 10 == 9)
			{
				if (i / 10 == 1)
					i = i + 3;
				else if (i / 10 == 2)
					i = i + 4;
				else if (i / 10 == 3) 
					i = i + 5;
				else if (i / 10 == 4)
					i = i + 6;
				else if (i / 10 == 5)
					i = i + 7;
				else if (i / 10 == 6)
					i = i + 8;
				else if (i / 10 == 7)
					i = i + 9;
			}
		}
	}
	putchar('\n');
	return (0);
}
