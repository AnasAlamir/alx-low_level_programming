#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		if (x == 'q' || x == 'e')
		x++;
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
