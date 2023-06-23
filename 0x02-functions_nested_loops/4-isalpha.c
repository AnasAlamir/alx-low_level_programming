#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character.
 *
 * @c: checks input of function
 *
 * Return: return 1 if lower case
 *		otherwise always 0 (Success)
 */
int _islower(int c)
{
	if (c >=  65 && c <= 122)
		return (1);
	return (0);
}
