#include<stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a var in dog structre
 * @d: structre
 * @name: name to use and put in d
 * @age: second var to use
 * @owner: third var to use
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
