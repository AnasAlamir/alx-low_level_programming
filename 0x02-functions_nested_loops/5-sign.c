#include "main.h"

/**
 * print_sign -  a function that checks for the sign of a number.
 *
 * @n: checks input of function
 *
 * Return: return 1 if lower case
 *		otherwise always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
