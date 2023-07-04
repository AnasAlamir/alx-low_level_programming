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
	int j, c = 0;

	for (j = 0; accept[j]; j++)
	{
		if (s[j] == accept[j])
			c++;
		else
			return (c);
	}
	return (c);
}
