#include <stdio.h>

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
		r =(argv[1] - '0') * (argv[2] - '0');
		printf("%d\n", r);
		return (0);
	}
	else
	{
		 printf("Error");
		 return (1);
	}
}
