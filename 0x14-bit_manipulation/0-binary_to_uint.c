#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converting a binary number in a string to a n int
 * @b: pointer to a string containing a binary number
 *
 * Return: the integer we got as the result
 */
unsigned int binary_to_uint(const char *b)
{
	int n = 0, len, i = 0, j, mul;

	if (b == NULL)
		return (0);
	len = strlen(b);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (i = 0; i < len; i++)
	{
		mul = 1;
		if (i == 0)
			n += b[len - 1 - i] - '0';
		for (j = 0; j < i; j++)
		{
			mul *= (b[len - 1 - i] - '0') * 2;
		}
		if (mul != 1)
			n += mul;
	}
	return (n);
}
