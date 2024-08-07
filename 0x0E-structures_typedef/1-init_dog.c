#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - Initializes a dog structure
 *@d: A pointer to a dog structure.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of rthe dog.
 *
 *Return: No return value (void)
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
