#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @s1: input
 *
 * @s2: input
 *
 * @n: input
 *
 * Return: NULL if size = 0
 *		otherwise a pointer to the array, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j, x, z;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (i == 0)
		*s1 = '\0';
	if (j == 0)
		*s2 = '\0';
	if ((int)n >= j)
		n = j;
	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		p[x] = s1[x];
	for (z = 0; z < (int)n; z++, x++)
		p[x] = s2[z];
	p[x] = '\0';
	return (p);
}
