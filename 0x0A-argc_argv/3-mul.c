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
	int r;
	if (argc == 3)
	{
		r =atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
		return (0);
	}
	else
	{
		 printf("Error\n");
		 return (1);
	}
}
