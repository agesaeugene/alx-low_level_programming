#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - grid created by nested loop
 * @width: width to input
 * @height: height to input
 * Return: 2 dim pointer array
 */

int **alloc_grid(int width, int height)
{
	int **gee;
	int a,b;

	if (width <= 0 || height <= 0)
		return (NULL);

	gee = malloc(sizeof(int *) *height);

	if(gee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		gee[a] = malloc(sizeof(int) * width);

		if (gee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(gee[a]);

			free(gee);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			gee[a][b] = 0;
	}

	return (gee);
}
