#include<stdio.h>

/**
 * print_chessboard - printing a chessboard into the screen
 *
 * @a: 2 dimenssion array
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
