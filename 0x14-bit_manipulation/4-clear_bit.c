#include <stdlib.h>

/**
 * clear_bit making a bit as 0 in a number at a specific index
 * @n: number to work on
 * @index: index of bit that should change to 0
 *
 * Return: 1 for success, -1 for having error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int power = 1, ind;

	if (index > 64)
		return (-1);
	ind = index;
	while (index > 0)
	{
		power *= 2;
		index--;
	}
	if ((*n >> ind) & 1)
		*n -= power;
	return (1);
}
