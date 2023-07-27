#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prints all lowercase letters of the alphabet except 'e' and 'q'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
