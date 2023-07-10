#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entery
 *
 * @argc: int
 *
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r = 0, i, j;

	if (argc == 0)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
					return (printf("Error\n"), 1);
			}
			r += atoi(argv[i]);
		}
		printf("%d\n", r);
	}
	return (0);
}
