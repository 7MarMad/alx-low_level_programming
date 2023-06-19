#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing the elements of a struct dog
 * @d: structre
 * @name: name to put in structre
 * @age: age to put in the structre
 * @owner: owner to put in the structre
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
