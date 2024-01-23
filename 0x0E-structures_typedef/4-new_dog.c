#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name:  name of the new dog
 * @age: age of the new dog
 * @owner:  owner of the new dog
 *
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allocate memory for the new_dog */
	new_dog = malloc(sizeof(dog_t));
	/* Check memory allocation failure */
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		/* free memorry in case of failure */
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
