#include "main.h"

/**
 * _islower - checks for uppercase character.
 *
 *@c: checks input of function
 *
 * Return: return 1 if uppercase
 *		otherwise always 0 (Success)
 */
int _isupper(int c)
{
	if (c >=  65 && c <= 90)
		return (1);
	return (0);
}
