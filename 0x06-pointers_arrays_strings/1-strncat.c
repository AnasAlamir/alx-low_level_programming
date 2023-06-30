#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 *
 * @dest: input fun
 *
 * @src: input fun
 *
 * @n: input fun
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l = 0;

	while (dest[l])
		l++;
	for (i = 0; n && src[i]; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
