#include<stddef.h>

/**
 * array_iterator - iterating in an array and printing the elements
 * @array: the array we iterate in
 * @size: size of the array
 * @action: function to print with
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
