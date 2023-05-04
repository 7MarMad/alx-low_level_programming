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
	if (index > 64)
		return (-1);
	while (n > 0 && index > 0)
	{
		n >>= 1;
		index--;
	}
	if (index > 0)
		return (-1);
	if (n & 1)
		return (1);
	else
		return (0);
}
