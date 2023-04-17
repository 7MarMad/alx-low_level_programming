#include "dog.h"
#include<stdlib.h>

/**
 * new_dog - creting a new instance of a structre
 * @name: name of the new dog
 * @age: arg
 * @owner: arg
 * Return: the new structre creted
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t nn;
	dog_t *new;

	new = &nn;
	if (name == NULL || owner == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
