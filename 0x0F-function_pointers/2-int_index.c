#include <stdio.h>

/**
 * int_index - searching for specific integers depending on the function ptr
 * @array: array to search in
 * @size: size of the array
 * @cmp: function to search/compare the integer
 *
 * Return: index of the integer satisfying the conditon,
 * -1 for fail to find any satisfying the conditon
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	unsigned long int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
