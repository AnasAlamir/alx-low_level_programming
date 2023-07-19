#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - a function that creates a new dog.
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * Return: d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(strlen(name) + 1);
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);
	return (d);
}
