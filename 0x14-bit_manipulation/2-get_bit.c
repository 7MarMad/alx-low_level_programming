#include <stdlib.h>

/**
 * get_bit - getting the bit in a specific index
 * @n: number given
 * @index: index of the bit we are getting
 *
 * Return: the bit we got at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 64)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
