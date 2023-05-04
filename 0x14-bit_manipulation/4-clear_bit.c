#include <stdlib.h>

/**
 * clear_bit - getting a bit to be 0
 *
 * n: number to work on
 * index: index wher to change the bit
 *
 * Return: 1 for success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pow = 1;

	if (index > 64)
		return (-1);
	while (index > 0)
	{
		pow *= 2;
		index--;
	}
	*n -= pow;
	return (1);
}
