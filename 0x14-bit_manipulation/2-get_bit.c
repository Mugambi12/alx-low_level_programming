#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 *
 * @n: The number containing the bit
 * @index: The index of the bit to get
 *
 * Return: The value of the bit at the given index, or -1 if the index is
 *         out of range
 *
 * Author: Silas Mugambi
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
