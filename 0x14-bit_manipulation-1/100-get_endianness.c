#include <stdlib.h>

/**
 * get_endianness - getting how the CPU work in this machine
 *
 * Return: 0 as big endian, 1 as little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *c;

	c = (char *)&n;
	if (*c == 1)
		return (1);
	else
		return (0);
}
