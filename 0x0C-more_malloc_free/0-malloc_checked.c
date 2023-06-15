#include <stdlib.h>

/**
 * malloc_checked - allocating memory with terminating process
 * with value 98 in case of NULL.
 * @b: size of desired allocated memory
 *
 * Return: address of new allocated memory or 98.
 */
void *malloc_checked(unsigned int b)
{
	void *add;

	add = malloc(b);
	if (add == NULL)
		exit(98);
	return (add);
}
