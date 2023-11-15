#include <stdlib.h>
#include <string.h>

#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * This function allocates memory for a new dog and copies the name and owner.
 * If memory allocation fails at any point, it frees all previously allocated
 * memory and returns NULL.
 *
 * Return: A pointer to the new dog, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = strdup(name);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = strdup(owner);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	return (newDog);
}

/**
 * free_dog - Frees a dog
 * @d: The dog to free
 *
 * This function frees the memory for the name, owner,
 * and the structure itself.
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
