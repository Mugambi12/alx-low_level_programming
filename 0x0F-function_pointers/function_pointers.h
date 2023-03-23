/*
 * Author: Silas Mugambi
 * Description: Header file containing prototypes for all functions used in
 *        the 0x0E-function_pointers directory.
 * This file includes the following function prototypes:
 *     - print_name: A function that prints a name using a given
 *            printing function.
 *     - array_iterator: A function that applies a given action to
 *            each element in an array.
 *     - int_index: A function that searches for an integer in an array
 *            using a given comparison function.
 */

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

/*
 * print_name - A function that prints a name using a given printing function.
 * @name: A pointer to the name string to be printed.
 * @f: A function pointer that takes a character pointer and returns nothing,
 *          used to print the name.
 *
 * This function prints a given name by passing it as an argument to the
 *          given printing function f.
 */
void print_name(char *name, void (*f)(char *));

/*
 * array_iterator - A function that applies a given action to each
        element in an array.
 * @array: A pointer to the integer array to be iterated over.
 * @size: The size of the integer array.
 * @action: A function pointer that takes an integer and returns nothing,
 *        used to apply an action to each element of the array.
 *
 * This function iterates over the given integer array and applies
 *        the given action to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/*
 * int_index - A function that searches for an integer in an array using
          a given comparison function.
 * @array: A pointer to the integer array to be searched.
 * @size: The size of the integer array.
 * @cmp: A function pointer that takes an integer and returns an integer,
 *        used to compare the target integer with each element in the array.
 *
 * This function searches for an integer in the given integer array by
 *          comparing it with each element using the given comparison function cmp.
 * If the integer is found, the index of the first occurrence is returned.
 *          Otherwise, -1 is returned.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
