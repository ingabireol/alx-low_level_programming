#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises a dog
 * @d: struct tp br initialised
 * @name: name of the dog
 * @age: age if the dog
 * @owner: owber of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
