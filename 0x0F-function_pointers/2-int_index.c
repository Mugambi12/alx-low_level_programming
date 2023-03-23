/*
 * Author: Silas Mugambi
 * Description: This file defines the function int_index, which searches for an
 *        integer in an array of integers using
 *              a comparison function passed as an argument.
 */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: A pointer to the integer array.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                    the cmp function does not return 0.
 *
 * This function searches for an integer in an array of integers using a
 *        comparison function passed as an argument.
 * The function takes an integer array, its size, and a function pointer as
 *        arguments.
 * The function returns the index of the first element for which the cmp
 *        function does not return 0.
 * If no element matches or size is less than or equal to 0, -1 is returned.
 * The function iterates through the array using a for loop.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
