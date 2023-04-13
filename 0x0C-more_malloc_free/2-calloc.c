#include<stdlib.h>

/**
 * _calloc - making calloc, allocating memory and initialize memory to '0'
 * @nmemb: num of elements
 * @size: size of each element in memory
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ss;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ss = (void *)malloc(nmemb * size);
	if (ss == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		s[i] = '0';
	}
	return (ss);
}
