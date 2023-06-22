#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: return 1 if lower case 
 *		otherwise always 0 (Success)
 */
int _islower(int c)
{
	if (c <=  97 && c >= 122)
		return (1);
	return (0);
}
