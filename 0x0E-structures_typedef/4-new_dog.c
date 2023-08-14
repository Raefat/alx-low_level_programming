#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - functiona that creates a new dog.
 * @name: dog name
 * @age: dog's age
 * @owner: owner's name
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	unsigned int n, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	newDog->name = malloc(n);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		newDog->name[i] = name[i];
	newDog->age = age;
	for (n = 0; owner[n]; n++)
		;
	newDog->owner = malloc(n);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}
