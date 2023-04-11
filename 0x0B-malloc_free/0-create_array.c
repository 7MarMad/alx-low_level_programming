#include<stdlib.h>
#include<string.h>
/**
 * create_array - creating an array with malloc and initializing it with 'H'
 * @size: size of the array
 * @c: the charcter that will be passed to the array
 * Return: a pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size * sizeof(char));
	if (ar == NULL || size == 0)
		return (NULL);
	else
	{
		memset(ar, c, size);
		return (ar);
}
