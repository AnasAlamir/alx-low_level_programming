#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - copy string
 *
 * @s1: input
 *
 * @s2: input
 *
 * Return: s1
 */
char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i]; i++)
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}
/**
 * _strlen - count length
 *
 * @s: input
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
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
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(_strlen(name) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}
