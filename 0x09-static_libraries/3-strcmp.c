#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: input fun
 *
 * @s2: input fun
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, c;

	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			c = 0;
		else if (s1[i] > s2[i])
		{
			c = s1[i] - s2[i];
			break;
		}
		else
		{
			c = s1[i] - s2[i];
			break;
		}
	}
	return (c);
}
