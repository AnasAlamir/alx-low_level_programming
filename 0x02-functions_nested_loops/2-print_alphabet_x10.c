#include "main.h"

/**
 * print_alphabet_x10 - to prints10 the alphabet in lowercase.
 */
void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			{
				_putchar(i);
			}
		 _putchar('\n');
	}
}
