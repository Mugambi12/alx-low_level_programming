#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings; /* Declare a variable argument list. */
	char *str; /* Declare a pointer to a string. */
	unsigned int index; /* Declare an index variable for the loop. */

	va_start(strings, n); /* Initialize the argument list. */

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *); /* Get the next argument of type char*. */

		if (str == NULL)
			printf("(nil)"); /* Print (nil) if the string is null. */
		else
			printf("%s", str); /* Print the string. */

		if (index != (n - 1) && separator != NULL)
			/* Print the separator if it is not null and this is not the last string. */
			printf("%s", separator);
	}

	printf("\n"); /* Print a newline character to end the string. */

	va_end(strings); /* End the argument list. */
}
