#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog structure from memory.
 * @d: Pointer to the dog structure to free.
 *
 * Return: Always void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
