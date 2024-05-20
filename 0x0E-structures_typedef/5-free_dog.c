#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated to struxt dog
 * @d: struct for dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
