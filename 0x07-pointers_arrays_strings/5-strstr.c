#include "main.h"
#include <stdio.h>

/**
 * *_strstr - a function that locates a substring.
 *
 * @haystack: input
 *
 * @needle: haystack
 *
 * Return: ret
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, c;
	char *ret = NULL;

	for (i = 0; haystack[i]; i++)
	{
		c = 0;
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i + j])
				c = 1;
			else
				c = 0;
		}
		if (c)
		{
			ret = &haystack[i];
			break;
		}
	}
	return (ret);
}
