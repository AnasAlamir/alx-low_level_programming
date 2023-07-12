#include "main.h"

/**
 * *create_array -  creates an array of chars, and initializes it with char.
 *
 * @size: input
 *
 * @c: input
 *
 * Return: NULL if size = 0
 *		otherwise a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	while (size--)
		p[size] = c;
	return (p);
}
