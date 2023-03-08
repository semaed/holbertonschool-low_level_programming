#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int y = 0;

	while (*(s1 + y) == *(s2 + y) && *(s1 + y))
		y++;

	if (*(s2 + y))
		return (*(s1 + y) - *(s2 + y));
	else
		return (0);
}
