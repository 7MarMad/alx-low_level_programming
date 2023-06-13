#include <stdlib.h>

/**
 * alloc_grid - allocating memory for a table or 2D array
 * @width: width of 2D ar
 * @height: h of 2D ar
 *
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i--]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
