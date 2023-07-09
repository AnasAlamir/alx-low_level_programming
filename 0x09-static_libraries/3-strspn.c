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
	int i, j, c = 0, cnt = 0;

	for (i = 0; s[i]; i++)
	{
		c = 0;
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				c = 1;
				break;
			}
		}
		if (c)
			cnt++;
		else
			break;
	}
	return (cnt);
}
