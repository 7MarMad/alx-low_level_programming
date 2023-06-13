#include <stdlib.h>

/**
 * create_array - creating an array of chars initialized
 * @size: size of the array
 * @c: the character to initialize with
 *
 * Return: pointer the the allocated memory
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
