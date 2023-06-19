#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - freeing the allocated memories in new_dog func
 * @d: structre
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);
	free(d);
}
