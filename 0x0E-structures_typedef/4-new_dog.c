#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - creates a new dog
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
*
* Return: pointer to the new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	/* Allocate memory for the new_dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Make copies of name and owner strings */
	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	/* Assign values to the new_dog struct */
	new_dog->name = name_copy;
	new_dog->owner = owner_copy;
	new_dog->age = age;

	return (new_dog);
}
