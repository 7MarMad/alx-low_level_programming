#include <stdlib.h>

/**
 * array_range - making an array with range obtained from args
 * @min: first number of the array
 * @max: last element in the array
 *
 * Return: pointer the array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i] = i;
	return (arr);
}
