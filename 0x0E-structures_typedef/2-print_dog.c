#include <stdio.h>
#include "dog.h"

/**
 * print_dog - printing all elements in the structre
 * @d: the structre to printf from
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: 0\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
