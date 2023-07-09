#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 *
 *@c: checks input of function
 *
 * Return: return 1 if uppercase
 *		otherwise always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >=  48 && c <= 57)
		return (1);
	return (0);
}
