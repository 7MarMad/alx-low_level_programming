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
	unsigned int len = 0;
	unsigned long int m;

	m = n;
	while (m > 0)
	{
		len++;
		m >>= 1;
	}
	if (index >= len)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
