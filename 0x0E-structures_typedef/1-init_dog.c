#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - functiona that initialiaze a dog struct
 * @dog: dog instance
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
