#include<stdio.h>

/**
 * swap_int - swaping to integers
 * @*a: arg
 * @*b: arg
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
