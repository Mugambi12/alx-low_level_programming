#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
  /* Declare variables to hold the number of bytes to print and the index of
        the current byte*/
	int bytes, index;

  /* Declare a function pointer to point to the memory address of the current
          function, which is main()*/
	int (*address)(int, char **) = main;

  /* Declare a variable to hold the opcode (machine code instruction)*/
	unsigned char opcode;

   /* Check that the program was executed with the correct number of
            command-line arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

  /* Convert the second command-line argument to an integer*/
	bytes = atoi(argv[1]);

  /* Check that the number of bytes is non-negative*/
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

  /* Loop through the specified number of bytes, printing the opcode of each
            one*/
	for (index = 0; index < bytes; index++)
	{
    /* Read the opcode at the current memory address and print it in
              hexadecimal format*/
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

    /* If we haven't printed the last byte yet, print a space after it*/
		if (index == bytes - 1)
			continue;
		printf(" ");

    /* Increment the function pointer to point to the next memory address*/
		address++;
	}

  /* Print a newline character to make the output more readable*/
	printf("\n");

  /* Return 0 to indicate successful completion of the program*/
	return (0);
}
