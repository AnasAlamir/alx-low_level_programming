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
	int j = 0, i;

	for (i = 0; s[i] && accept[i]; i++)
	{
		if (s[i] == accept[i])
			j++;
		else
			break;
	}
	return (j);
}
