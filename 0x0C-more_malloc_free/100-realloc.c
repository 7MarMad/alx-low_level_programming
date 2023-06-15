#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocating memory for a more memory or less one
 * @ptr: old array
 * @old_size: old size of old array
 * @new_size: new size of the new array
 *
 * Return: pointer to the new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (str == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		memcpy(str, ptr, new_size);
		free(ptr);
	}
	return (str);
}
