#ifndef DOG_H
#define DOG_H

/**
 * struct Repo: description
 * GitHub repository: holbertonschool-low_level_programming
 * Directory: structures_typedef
 * File: dog.hdog - typedef variable
 * @name: char type
 * @age: float type
 * @owner: char type
 * Description: variables and typedef variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
