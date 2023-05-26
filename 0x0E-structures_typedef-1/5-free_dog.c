#include<stdlib.h>
#include "dog.h"

/**
 * free_dog - freeing the allocated memory
 * @d: the structre to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
