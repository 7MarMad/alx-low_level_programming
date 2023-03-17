#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, h;

	for (h = 0; h < 10; h++)
	{
		for (k = 0; k < 10; k++)
		{
			for (j = 0; j < 10; j++)
			{
				for (i = 0; i < 10; i++)
				{
					if ((j == h && k < i) || (j > h))
					{
						putchar(h + '0');
						putchar(k + '0');
						putchar(' ');
						putchar(j + '0');
						putchar(i + '0');
						if (!(h == 9 && k == 8 && j == 9 && i == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
