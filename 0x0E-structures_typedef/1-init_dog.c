#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
