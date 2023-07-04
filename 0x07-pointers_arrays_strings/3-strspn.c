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
	int j;

	for (j = 0; accept[j] == s[j] && accept[j]; j++)
	;
	return (j);
}
