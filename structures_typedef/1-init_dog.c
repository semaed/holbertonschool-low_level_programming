#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - typedef
 * @d: varibale
 * @name: variable char
 * @age: varibale float
 * @owner: variable char
 *  Description: variable typedef and variables
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
	{
		return;
	}


	d->name = name;
	d->age = age;
	d->owner = owner;
}
