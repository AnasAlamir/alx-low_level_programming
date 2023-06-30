#include "main.h"

/**
 * *_strncpy - copies the string pointed to by src
 *
 * @dest: input fun
 *
 * @src: input fun
 *
 * @n: input fun
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n && src[i] != '\0'; i++ )
		dest[i] = src[i];
	return (dest);
}
