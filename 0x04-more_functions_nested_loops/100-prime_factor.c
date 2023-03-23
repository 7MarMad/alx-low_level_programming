#include<stdio.h>
#include<math.h>

/**
 * main - Entry point for prime factors
 *
 * Return: Always 0
 */
int main(void)
{
	int i, max;
	long int a = 612852475143;

	while (a % 2 == 0)
	{
		max = 2;
		a = a / 2;
	}

	for (i = 3; i <= sqrt(a); i = i + 2)
	{
		while (a % i == 0){
			max = i;
			a = a / 2;
		}
	}
	if (a > 2)
		max = a;
	printf("%d\n", max);
	return (0);
}
