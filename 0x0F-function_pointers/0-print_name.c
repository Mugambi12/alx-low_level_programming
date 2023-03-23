/*
 * Author: Silas Mugambi
 * Description: This file defines the function print_name, which takes a name
 *      string and a function pointer as arguments
 *      and uses the function pointer to print the name.
 */

#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: A pointer to the name string to be printed.
 * @f: A function pointer that takes a character pointer and returns nothing,
 *      used to print the name.
 *
 * This function takes a given name string and a function pointer as arguments,
 *      and uses the function pointer to print the name.
 * If either argument is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
