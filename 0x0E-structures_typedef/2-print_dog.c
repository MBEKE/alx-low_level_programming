#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints info about a struct dog
 * @d: pointer to the struct dog to be printed
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* print name */
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		/* Print age */
		printf("Age: %.6f\n", d->age);
		/* Print owner */
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
