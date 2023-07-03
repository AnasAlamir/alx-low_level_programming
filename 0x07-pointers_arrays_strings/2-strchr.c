#include "main.h"
#include <stddef.h>

/**
 * *_strchr - a function that locates a character in a string.
 *
 * @s: input
 *
 * @c: input
 *
 * Return: r
 */
char *_strchr(char *s, char c)
{
	int j;
	char *r = NULL;

	for (j = 0; s[j]; j++)
		if (s[j] == c)
		{
			r = (s + j);
			break;
		}
	return (r);
}
