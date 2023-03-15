#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb:  data members in the memory.
 * @size: data space required.
 * Return: pointer with the address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *cal;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	cal = malloc(nmemb * size);
	if (cal == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		cal[i] = 0;
	}
	return (cal);
}
