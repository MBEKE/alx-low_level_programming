#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - freees memory allocated for dog structure
 * @d: pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* free allocated mem for name and owner strings */
		free(d->name);
		free(d->owner);
		/* free mem for the dog structure itself */
		free(d);
	}
}
