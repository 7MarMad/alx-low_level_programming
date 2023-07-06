#include <stdlib.h>

/**
 * set_bit - setting a bit to 1 in a specific index
 * @n: number to change
 * @index: index where to assign 1
 *
 * Return: 1 for success, -1 for having an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int power = 1, ind;

	if (index > 64)
		return (-1);
	ind = index;
	while (index > 0)
	{
		power *= 2;
		index--;
	}
	if ((*n >> ind) ^ 1)
		*n += power;
	return (1);
}
