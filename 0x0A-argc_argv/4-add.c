#include <stdio.h>
#include <stdlib.h>

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
	int r = 0, i;

	if (argc == 0)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] >= 48 && argv[i][0] <= '9')
				r += atoi(argv[i]);
			else
				return (printf("Error\n"), 1);
		}
		printf("%d\n", r);
	}
	return (0);
}
