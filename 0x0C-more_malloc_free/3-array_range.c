#include<stdlib.h>

/**
 * array_range - writing elements in an a new array depending on range
 * @min: the minimum arg
 * @max: maxumum in the array arg
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
