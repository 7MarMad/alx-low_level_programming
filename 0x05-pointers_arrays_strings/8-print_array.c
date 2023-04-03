#include<stdio.h>
#include<string.h>

/**
 * print_array - printing a specific number of elements
 * @a: name of the array to be passed
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
