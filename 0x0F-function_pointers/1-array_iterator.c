/*
 * Author: Silas Mugambi
 * Description: This file defines the function array_iterator, which takes an
 *          integer array, its size, and a function pointer as arguments
 *              and executes the function on each element of the array.
 */

#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 *      of an array.
 * @array: A pointer to the integer array to be iterated.
 * @size: The size of the array.
 * @action: A function pointer that takes an integer and returns nothing,
 *        used to execute the function on each element of the array.
 *
 * This function takes an integer array, its size, and a function pointer
 *                as arguments, and executes the function pointer on each
 *            element of the array.
 * If either array or function pointer is NULL, the function does nothing.
 * The function is executed on each element of the array using a while loop.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
