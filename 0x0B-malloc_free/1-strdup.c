#include "main.h"

/**
 * *_strdup - returns a pointer contains a copy of the string given
 *
 * @str: input
 *
 * Return: NULL if size = 0
 *		otherwise a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	for (i = 0; str[i]; i++)
		;
	p = malloc(i * sizeof(char));
	if (p == NULL || str == NULL)
		return (NULL);
	j = 0;
	while (str++)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
