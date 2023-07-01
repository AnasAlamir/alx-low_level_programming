#include "main.h"

/**
 * *cap_string - capitalizes all words
 *
 * @a: input
 *
 * Return: a
 */
char *cap_string(char *a)
{
	int i, j;
	char b[] = ",;.!?\"(){}\n\t ";

	for (i = 0; a[i]; i++)
	{
		for (j = 0; b[j]; j++)
			if (a[i] == b[j] && a[i + 1] >= 97 && a[i + 1] <= 122 && a[i + 1] != '\0')
				a[i + 1] -= 32;
	}
	return (a);
}
