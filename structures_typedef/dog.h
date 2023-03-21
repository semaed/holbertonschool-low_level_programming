#ifndef DOG_H
#define DOG_H

/**
 * struct dog - typedef variable
 * @name: char type
 * @age: float type
 * @owner: char type
 * Description: variables and typedef variable
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
