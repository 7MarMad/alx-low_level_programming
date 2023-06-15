#include <stdlib.h>

/**
 * _calloc - contiguous memory allocation using malloc
 * @nmemb: number of blocks
 * @size: size of each block
 *
 * Return: pointer to the address of first block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ss;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ss = malloc(size * nmemb);
	if (ss == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ss[i] = '0';
	return (ss);
}
