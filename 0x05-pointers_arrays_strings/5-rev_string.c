#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: input fun
 */
void rev_string(char *s)
{
	int i, j, l = 0;
	char tmp;

	while (s[l] != '\0')
		l++;
	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
