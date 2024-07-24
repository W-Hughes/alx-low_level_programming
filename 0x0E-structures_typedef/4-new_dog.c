#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog (dog_t), or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int namelen = 0;
	int ownerlen = 0;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[namelen])
		namelen++;

	while (owner[ownerlen])
		ownerlen++;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc((namelen + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		ndog->name[i] = name[i];

	ndog->owner = malloc((ownerlen + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= ownerlen; i++)
		ndog->owner[i] = owner[i];

	ndog->age = age;

	return (ndog);
}
