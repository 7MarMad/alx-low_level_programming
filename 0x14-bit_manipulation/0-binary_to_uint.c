#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/**
 * binary_to_uint - converting a binary number in a string to an integer
 *
 * @b: string containing the number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, num, i = 0, power = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	num = atoi(b);
	while (num > 0)
	{
		res += (num % 10) * power;
		num <<= 1;
		power *= 2;
	}
	return (res);
}
