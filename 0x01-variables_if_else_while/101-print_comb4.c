#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < 10; j++)
		{
			for (i = 0; i < 10; i++)
			{
				if (i > j > k)
				{
					putchar(k + '0');
					putchar(j + '0');
					putchar(i + '0');
					if (k != 7 || j != 8 || i != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
