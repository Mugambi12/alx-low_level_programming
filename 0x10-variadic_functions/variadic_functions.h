#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-variadic_functions directory.
 */

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 *
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints a data type
 *         corresponding to symbol.
 *
 * Description: This struct defines a printer which is used by the
 *              `print_all` function to print any combination of data
 *              types specified in the format string. The symbol field
 *              is a character that represents the data type, and the
 *              print field is a function pointer to a function that
 *              takes a `va_list` argument and prints the corresponding
 *              data type.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
