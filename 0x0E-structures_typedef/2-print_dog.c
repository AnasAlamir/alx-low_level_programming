#include "dog.h"

/**
 *  print_dog -  a function that prints a struct dog
 *
 * @d: input struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}