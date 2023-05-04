#include <stdlib.h>

/**
 * flip_bits - flipping bits so to get a total different number
 *
 * @n: first number we have
 * @m: the wanted result
 *
 * Return: number of flips needed
 */
int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = 0;
	unsigned long int tmp, sec;

	if (n > m)
	{
		tmp = n;
		sec = m;
	}
	else
	{
		tmp = m;
		sec = n;
	}
	while (tmp > 0)
	{
		if (((tmp & 1) && !(sec & 1)) || (!(tmp & 1) && (sec & 1)))
			num++;
		tmp >>= 1;
		sec >>= 1;
	}
	return (num);
}
