#include <stdlib.h>

/**
 * flip_bits - how many flips are needed to have the same number
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: the number of bit flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = 0, def;

	def = n ^ m;
	while (def != 0)
	{
		if (def & 1)
			num++;
		def >>= 1;
	}
	return (num);
}
