/**
 * @file variadic_functions.c
 * @brief Implementation of variadic_functions.h header file.
 *
 * This file contains the implementation of the functions declared in
 * variadic_functions.h header file.
 *
 * @Author Silas Mugambi
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * This function takes a variable number of parameters and prints them to
 * stdout, separated by a given separator string.
 *
 * @param separator The string to be printed between numbers.
 * @param n The number of integers passed to the function.
 * @param ... A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
