#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'z';
	int i;

	for (i = 0 ; i < 26 ; i++)
		putchar(x--);
	putchar('\n');
	return (0);
}
