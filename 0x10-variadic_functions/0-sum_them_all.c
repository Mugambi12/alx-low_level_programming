/**
 * @file variadic_functions.c
 * @brief Implementation of variadic_functions.h header file.
 * This file contains the implementation of the functions declared in
 *            variadic_functions.h header file.
 * @author Silas Mugambi
 */
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * @brief Sums all its parameters.
 * This function takes a variable number of parameters and calculates their sum.
 * @param n The number of parameters passed to the function.
 * @param ... A variable number of parameters to calculate the sum of.
 * @return If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
