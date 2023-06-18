#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a', z = 'A';
	int i;

	for (i = 0 ; i < 26 ; i++)
		putchar(x++);
	for (i = 0 ; i < 26 ; i++)
		putchar(z++);
	putchar('\n');
	return (0);
}
