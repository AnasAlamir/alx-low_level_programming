#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: input fun
 *
 * Return: c
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
