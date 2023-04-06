#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped to
 *             get from n to m
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
