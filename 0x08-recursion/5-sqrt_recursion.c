#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input
 *
 * @c: input
 *
 * Return:the natural square root of a number.
 */
int check(int n, int c);
int _sqrt_recursion(int n)
{
	return (check(n, 1));
}

/**
 * check - checks if there is natural square root of a number
 *
 * @n: input
 *
 * @c: input
 *
 * Return: int
 */
int check(int n, int c)
{
	if (c * c == n)
		return (c);
	if (c * c < n)
		return (check(n, c + 1));
	return (-1);
}
