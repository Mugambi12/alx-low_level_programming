#include <stdio.h>
#include <unistd.h>

/**
 * main - prints hexadecimal numbers
 * Description: This prints the digits of hexadecimal numbers from 0 to f
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
