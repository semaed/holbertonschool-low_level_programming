#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @c: value of array
 * @size: size of array
 * Return: pointer of array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;
		if (size == 0)
			return (NULL);

		if (arr == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
}
