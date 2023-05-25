#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if value is not present or
 * if array is NULL
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;/*Decaler index variable*/

	/*If the array is NULL, return -1*/
	if (!array)
		return (-1);

	/*Iterate over the array*/
	for (i = 0; i < size; i++)
	{
		/*Print the current value being checked*/
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/*If the current element matches the target value, return its index*/
		if (array[i] == value)
			return (i);
	}

	/*If no match is found return -1*/
	return (-1);
}

