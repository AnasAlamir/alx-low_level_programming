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
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 97 && a[i] <= 122 && a[i] == (',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}' || '\n' ||' ' || '\t'))
			a[i + 1] -= 32;
	}
	return (a);
}
