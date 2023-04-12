#include "main.h"

/**
 * get_bit - Gets the value
 * @n: The bit
 * @index: Index to get the value
 * Return: Error occurs - -1.
 * Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
