#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 *
 * @b: input
 *
 * Return: NULL if size = 0
 *		otherwise a pointer to the array, or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
		exit (98);
	return (p);
}
