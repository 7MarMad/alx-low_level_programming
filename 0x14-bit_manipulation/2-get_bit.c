#include <stdlib.h>

/**
 * get_bit - getting the bit at an specific index
 *
 * @n: number to check in
 * @index: index of the bit we want
 *
 * Return: the bit 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx;

	if (index > 64)
		return (-1);
	idx = index;
	while (n > 0 && idx > 0)
	{
		n >>= 1;
		idx--;
	}
	
	return (n & 1);
}
