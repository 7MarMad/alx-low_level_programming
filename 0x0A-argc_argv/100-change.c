#include<stdio.h>
#include<stdlib.h>

/**
 * main - coins change an interesting exchange of coins
 * @argc: number of strings in argv
 * @argv: array with size 1 having the passed number
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int c, u, i = 0, j = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			c = atoi(argv[1]);
			while (c > 0)
			{
				u = c / coin[j];
				if (u >= 1)
				{
					c = c - u * coin[j];
					i = i + u;
				}
				j++;
			}
			printf("%d\n", i);
			return (0);
		}
	}
}
