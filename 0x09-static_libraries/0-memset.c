#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 *
 * @s: input
 *
 * @b: input
 *
 * @n: input
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
