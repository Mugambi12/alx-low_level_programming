#include <unistd.h>

/*
 * Author: Silas Mugambi
 * Description: This function writes a single character to the standard output
 *         (stdout) using the write() function from the unistd.h library.
 * Parameters:
 *     - c: The character to be written to stdout.
 * Return value:
 *   - On success, the function returns 1.
 *   - On failure, the function returns -1 and sets errno to an
 *          appropriate error code.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
