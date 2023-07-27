#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prnts NOs frm 0-9 sprtd/comma&spac aftr ech no flwd/newlin char
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
