#include "dog.h"
#include <stdio.h>

/**
 * print_dog - functiona that prints dog struct
 * @d: dog instance
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("name: %s\n", d->name);
		else
			printf("name: (nil)\n");
		if (d->age)
			printf("agee: %f\n", d->age);
		else
			printf("age: (nil)\n");
		if (d->owner)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}
