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
	ar = (int **)malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i--]);
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
