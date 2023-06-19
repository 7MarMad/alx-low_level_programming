#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *new;
	int len1 = 0, len2 = 0;

	if (name != NULL)
		len1 = strlen(name);
	if (owner != NULL)
		len2 = strlen(owner);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc((sizeof(char) * len1) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = malloc((sizeof(char) * len2) + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->owner = owner;
	return (new);
}
