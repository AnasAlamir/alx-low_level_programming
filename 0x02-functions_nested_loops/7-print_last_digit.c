#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 *
 * @n: checks input of function
 *
 * Return: return n % 10
 *
 */
int print_last_digit(int n)
{
	int x;

	if (n >= 0)
		x = n % 10;
	else
		x = (n % 10) * -1;
	_putchar('0' + x);
	return (x);
}
