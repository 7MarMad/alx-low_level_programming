#include <stdlib.h>

/**
 * set_bit - setting a specific bit to 1
 *
 * @n: number
 * @index: index of the bit to set
 *
 * Return: 1 for success, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pow = 1;

	if (index > 64)
		return (-1);
	while (index > 0)
	{
		pow *= 2;
		index--;
	}
	*n += pow;
	return (1);
}
