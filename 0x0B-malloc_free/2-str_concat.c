#include "main.h"

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: input
 *
 * @s2:input
 *
 * Return: NULL if size = 0
 *		otherwise a pointer, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x = 0, z = 0;
	char *p;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	p = malloc((i + j) * sizeof(char) + 1);
	if (p == NULL)
		return (0);
	while (x < i)
	{
		p[x] = s1[x];
		x++;
	}
	while (z < j)
	{
		p[x] = s2[z];
		z++;
		x++;
	}
	p[x] = '\0';
	return (p);
}
