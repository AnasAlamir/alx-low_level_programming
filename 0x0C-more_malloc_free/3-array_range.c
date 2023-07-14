#include "main.h"

/**
 * *array_range - creates an array of integers.
 *
 * @min: input
 *
 * @max:input
 *
 * Return: NULL if size = 0
 *		otherwise a pointer to the array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		p[i] = j;
	return (p);
}
