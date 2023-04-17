#include "dog.h"
#include<stdlib.h>
#include<string.h>

/**
 * new_dog - creting a new instance of a structre
 * @name: name of the new dog
 * @age: arg
 * @owner: arg
 * Return: the new structre creted
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	len1 = strlen(name);
	len2 = strlen(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc((sizeof(char) * len1) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc((sizeof(char) * len2) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
