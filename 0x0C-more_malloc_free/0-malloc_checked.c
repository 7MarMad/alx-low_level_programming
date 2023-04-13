#include<stdlib.h>

/**
 * malloc_checked - checking for malloc being successeful or not
 * @b: size of the memory we need to allocate
 * Return: a pointer of whatever type
 */
void *malloc_checked(unsigned int b)
{
	void *ss;

	ss = malloc(b);
	if (ss == NULL)
		exit(98);
	return (ss);
}
