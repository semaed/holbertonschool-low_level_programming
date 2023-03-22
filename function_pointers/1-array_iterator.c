#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - parameter on each element
 * @array: array integer to check
 * @size: size of the array
 * @action: function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
