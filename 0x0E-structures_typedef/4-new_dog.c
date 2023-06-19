#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creating a new dog struct
 * @name: name for the new dog
 * @age: age of the new dog
 * @owner: name of owner of the new dog
 *
 * Return: address of the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
/*	dog_t new_d;*/
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
