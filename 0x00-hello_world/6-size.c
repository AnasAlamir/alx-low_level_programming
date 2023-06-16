#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a c program to print using printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
