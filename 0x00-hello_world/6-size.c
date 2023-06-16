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
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
