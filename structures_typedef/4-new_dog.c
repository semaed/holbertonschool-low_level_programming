#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - create new dog
 * @name: char variable
 * @age: int variable
 * @owner: char variable
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	nd->name = malloc(strlen(name + 1));
	nd->owner = malloc(strlen(owner + 1));
		if (nd == NULL || nd->name == NULL || nd->owner == NULL)
		{
			free(nd);
			free(nd->name);
			free(nd->owner);
			return (NULL);
		}
	nd->age = age;
	nd->name = strdup(name);
	nd->owner = strdup(owner);

	return (nd);
}
