#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: input
 *
 * @height:input
 *
 * Return: NULL if size = 0
 *		otherwise a pointer, or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **p, w, h, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int));
	if (p == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		p[h] = malloc(width * sizeof(int));
		if (p[h] == NULL)
		{
			while (h--)
				free(p[h]);
			free(p);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			p[h][w] = 0;
			w++;
		}
		h++;
	}
	return (p);
}
