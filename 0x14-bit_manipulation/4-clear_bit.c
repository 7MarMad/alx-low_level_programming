#include <stdlib.h>

/**
 * clear_bit - getting a bit to be 0
 *
 * @n: number to work on
 * @index: index wher to change the bit
 *
 * Return: 1 for success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow = 1;
	unsigned int idx;

	if (index > 64)
		return (-1);
	idx = index;
	while (index > 0)
	{
		pow *= 2;
		index--;
	}
	if ((*n >> idx) & 1)
		*n -= pow;
	return (1);
}
