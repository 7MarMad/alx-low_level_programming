#include<stdlib.h>
#include<string.h>

/**
 * _realloc - reallocating the memory of an existing allocated memory
 * @ptr: old pointer to the memory
 * @old_size: arg with ptr
 * @new_size: new size for the new allocated memory
 * Return: pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int expected_size;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (old_size < new_size)
		expected_size = old_size;
	else
		expected_size = new_size;
	memcpy(arr, ptr, expected_size);
	free(ptr);
	return (arr);
}
