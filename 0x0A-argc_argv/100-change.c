#include <stdio.h>
#include <stdlib.h>

/**
 * main - the least ammounts of coins that need to be returned back
 * @argc: number of arguments
 * @argv: array that have arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int num, i = 0, j = 0, q;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
		printf("0\n");
	else
	{
		while (num > 0)
		{
			q = num / coin[j];
			if (q >= 1)
			{
				num -= q * coin[j];
				i += q;
			}
			j++;
		}
		printf("%d\n", i);
	}
	return (0);
}
