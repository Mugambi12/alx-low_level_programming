#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 *
 * @n: A pointer to the number containing the bit
 * @index: The index of the bit to set
 *
 * Return: 1 on success, or -1 if the index is out of range
 *
 * Author: Silas Mugambi
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
