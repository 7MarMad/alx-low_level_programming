#include <stddef.h>

/**
 * get_endianness - getting if the machine is using memory with
 * little endia,,ess or big endianess
 * 
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int x = 3;
	char *c;

	c = (char *)&x;
	if (c == 1)
		return (1);
	else
		return (0);
}
