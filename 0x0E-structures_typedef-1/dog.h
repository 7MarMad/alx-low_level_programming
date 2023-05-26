#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structre of dog info
 *
 * @name: name of the dog
 * @age: the dog's age
 * @owner: name of the owner of the dog
 *
 * Description: having the info of a dog in a single structre
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
