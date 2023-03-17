#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
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
				if ((j == (k / 10) && (k % 10) < i) || (j > (k / 10))
				{
					putchar(k / 10 + '0');
					putchar(k % 10 + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(i + '0');
					if (!(k == 98 && j == 9 && i == 9))
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
