#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 *
 * @dest: input fun
 *
 * @src: input fun
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, l = 0, n;

	while (dest[l])
		l++;
	for (i = 0, n = l; src[i]; i++, n++)
	{
		dest[n] = src[i];
	}
	return (dest);
}
