#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intiatizes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog's owner.
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
