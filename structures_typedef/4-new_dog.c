#include <stdlib.h>
#include <string.h>

/*
 * This function creates a new instance of a dog and stores a copy of the provided name and owner.
 *
 * Prototype: dog_t *new_dog(char *name, float age, char *owner);
 * Parameters:
 *   - name: The name of the dog.
 *   - age: The age of the dog.
 *   - owner: The owner of the dog.
 *
 * Returns a pointer to the newly created dog instance or NULL if the function fails to allocate memory.
 */


/*
 * This file contains the definition of a structure "dog_t" representing a dog,
 * along with a function "new_dog" to dynamically create an instance of this structure.
 * The stdlib.h and string.h libraries are included for the malloc, free, and strdup functions.
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/*
 * Function to dynamically create an instance of the "dog_t" structure.
 * It takes the name, age, and owner of the dog as parameters.
 * Returns a pointer to the newly created "dog_t" instance, or NULL in case of memory allocation error.
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
