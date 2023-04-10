#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/**
 * main - sum of positive numbers 
 * @argc: arg
 * @argv: arg array
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int c, len;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (argc > 1)
		{
			len = strlen(argv[argc - 1]);
			while (len > 0)
			{
				if (!(isdigit(argv[argc - 1][len - 1])))
				{
					printf("Error\n");
					return (1);
				}
				len--;
			}
			c += atoi(argv[--argc]);
		}
		printf("%d\n", c);
		return (0);
	}
}
