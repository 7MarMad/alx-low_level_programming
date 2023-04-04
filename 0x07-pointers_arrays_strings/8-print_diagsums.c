#include<stdio.h>

/**
 * print_diagsums - sum of 2 digonals of a matrix
 *
 * @a: array
 * @size: arrays size
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		j = j + a[i * size + i];
		k = k + a[i * size + (size - i - 1)];
	}
	printf("%d, ", j);
	printf("%d\n", k);
}
