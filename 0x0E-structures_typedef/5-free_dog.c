#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - Frees memory allocated by dog.
 *@d: Pointer to struct.
 *
 * Return: no return value.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
