#include <stdlib.h>

/**
 * print_binary - printing an integer as a binary
 *
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	int j = 0, m;

	m = n;
	if (m == 0)
		printf("0");
	while (m > 0)
	{
		m >>= 1;
		j++;
	}
	while (j > 0)
	{
		j--;
		if ((n >> j) & 1)
			printf("1");
		else
			printf("0");
	}
}
