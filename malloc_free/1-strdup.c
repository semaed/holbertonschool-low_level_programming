#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - copy of the string
 * @str: string
 * Return: string
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = (strlen(str) + 1);
	dup = malloc(len);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
