#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest, d;

	if (a >= b)
	{
		d = a;
		if (d >= c)
			largest = d;
		else
			largest = c;
	}
	else if (b > a)
	{
		d = b;
		if (d >= c)
			largest = d;
		else
			largest = c;
	}

	return (largest);
}
