#include <stdio.h>

/**
 * main - part of the code causing the output to go into infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/*
	*while (i < 10)
	*{
	*	putchar(i);
	*}
	*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
