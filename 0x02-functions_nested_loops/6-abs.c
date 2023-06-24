#include "main.h"

/**
 *_abs -  a function that computes the absolute value of an integer..
 *
 * @n: checks input of function
 *
 * Return: return n if n >= 0
 *		otherwise always n * -1 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	n = n * -1;
	return (n);
}
