#include<stdlib.h>
#include<string.h>

/**
 * alloc_grid - allocating a matrix
 * @height: height arg
 * @width: width of matrix
 * Return: pointer to matrix
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc((width * sizeof(int)) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ar[i] = malloc((height * sizeof(int)) + 1);
		if (ar[i] == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
