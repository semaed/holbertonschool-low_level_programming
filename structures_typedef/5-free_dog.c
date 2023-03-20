#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free dogs
 * @d: variable to be freed
 * Return: void
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
