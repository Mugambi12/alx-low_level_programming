#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string containing the binary number to be converted.
 *
 * Description: This function takes in a string representing a binary number &
 *           converts it to its equivalent unsigned int representation. If
 *           the input string is null or contains any character other than
 *           '0' or '1', the function returns 0. Otherwise, it iterates over
 *           the input string and performs the conversion using the formula:
 *
 *              dec_val = 2 * dec_val + (b[i] - '0')
 *
 *           where 'dec_val' represents the current decimal value, and 'b[i]'
 *           represents the current bit in the binary string being converted.
 *
 * Return: The converted unsigned integer value.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
