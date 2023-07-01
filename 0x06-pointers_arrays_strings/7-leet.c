#include "main.h"

/**
 * *leet - encodes a string into 1337.
 *
 * @a: input
 *
 * Return: a
 */
char *leet(char *a)
{
	int i, j;
	char b[] = "4A4a3E3e0O0o7T7t1L1l";

	for (i = 0; a[i]; i++)
	{
		for (j = 0; b[j]; j++)
			if (a[i] == b[j] && j % 2 != 0)
				a[i] = b[j - 1];
	}
	return (a);
}
