#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: input
 *
 * @accept: input
 *
 * Return: ret
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ret;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
			{
				ret = &s[i];
				return (ret);
			}
	}
	return ('\0');
}
