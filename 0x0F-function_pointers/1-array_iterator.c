#include <stdio.h>

/**
 * array_iterator - iterating to the array and giving each element
 * to a function to be printed depending on the function passed to
 * @array: the array
 * @size: size of the array
 * @action: function pointer through the function that get an
 * element to print
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
