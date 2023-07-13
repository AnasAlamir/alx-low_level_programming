#include "main.h"

/**
 * *_calloc -  allocates memory for an array, using malloc.
 *
 * @nmemb: input  elements of size
 *
 * @size: input bytes each
 *
 * Return: NULL if size = 0
 *		otherwise a pointer to the array, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = malloc(nmemb * size);
	int i;
	char *ptr = p;

	ptr = p;
	if (p == NULL || nmemb == 0 || size == 0)
		return(NULL);
	for (i = 0; ptr[i]; i++)
		ptr[i] = 0;
	return (p);
}
