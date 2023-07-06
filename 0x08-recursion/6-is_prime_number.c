#include "main.h"

/**
 * is_prime_number - returns 1 if is a prime number, otherwise return 0.
 *
 * @n: input
 *
 * @div: input
 *
 * Return: 1 ifprime number, otherwise return 0.
 */

int is_prime(int n, int div);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n / 2));
}

/**
 * is_prime - returns 1 if integer is a prime number, otherwise return 0.
 *
 * @n: input
 *
 * @div: input
 *
 * Return: 1 if prime number, otherwise return 0.
 */

int is_prime(int n, int div)
{
	if (n % div == 0 && div > 1)
		return (0);
	if (div > 1)
	return (is_prime(n, div - 1));
	return (1);
}
