#include "dog.h"
#include <stdio.h>

/**
 * new_dog - functiona that creates a new dog.
 * @name: dog name
 * @age: dog's age
 * @owner: owner's name
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newDog;

	newDog = malloc(sizeof(dog_t));
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
}
