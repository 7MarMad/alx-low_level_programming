#include<stdlib.h>
/**
 * int_index - searching for a specific number with a function pointer
 *
 * @array: array where to search
 * @size: size of the array
 * @cmp: function that compare
 *
 * Return: an int value for success or failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
