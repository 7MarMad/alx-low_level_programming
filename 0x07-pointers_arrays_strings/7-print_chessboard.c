#include<stdio.h>

/**
 * print_chessboard - printing a chessboard into the screen
 *
 * @a: 2 dimenssion array
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i;

	for (i = 0; i < 8; i++)
	{
		printf("%s", a[8]);
		printf("\n");
	}
}
