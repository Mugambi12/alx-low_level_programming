#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 *
 * @n: A pointer to the number containing the bit
 * @index: The index of the bit to clear
 *
 * Return: 1 on success, or -1 if the index is out of range
 *
 * Author: Silas Mugambi
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
