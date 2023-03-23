#include <unistd.h>

/**
 * _putchar - writes a single character to the standard output stream (stdout).
 *
 * @c: The character to be printed.
 *
 * This function writes the character @c to the standard output stream (stdout).
 * If successful, it returns the value 1, otherwise it returns -1 and sets the
 * global variable errno to indicate the error.
 *
 * Return: 1 on success, -1 on failure.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
