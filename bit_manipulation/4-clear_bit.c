#include "main.h"
/**
 * clear_bit - Sets the value of a bit
 * @n: Pointer to the bit
 * @index: Index to set the value at
 * Return: If an error occurs - -1
 *         Otherwise - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
