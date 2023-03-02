#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int h = 0;

	while (dest[i] != '\0')
		i++;

	while (src[h] != '\0')
	{
		dest[i] = src[h];
		i++;
		h++;
	}
	dest[i] = '\0';

	return (dest);
}
