#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog structure with given values
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
