#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 *
 * @dest: input
 *
 * @src: input
 *
 * @n: input
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
