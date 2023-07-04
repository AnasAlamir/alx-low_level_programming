#include "main.h"

/**
 * *_strspn - a function that gets the length of a prefix substring.
 *
 * @s: input
 *
 * @accept: input
 *
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] == accept[0])
		{
			i++;
			return (i);
		}
	return (i);
}
