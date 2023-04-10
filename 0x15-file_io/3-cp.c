#include "main.h"

/**
 * copy_file - Copies the contents of a file to another file.
 * @source_file: A pointer to the source file.
 * @destination_file: A pointer to the destination file.
 *
 * Return: On success, 0. On failure, -1.
 *
 * Author: Silas Mugambi
 */
void copy_file(char *source_file, char *destination_file)
{
	int source_fd, dest_fd, r, w;
	char buffer[1024];

	source_fd = open(source_file, O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}

	dest_fd = open(destination_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_file);
		close(source_fd);
		exit(99);
	}

	while ((r = read(source_fd, buffer, 1024)) > 0)
	{
		w = write(dest_fd, buffer, r);
		if (w != r || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_file);
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		close(source_fd);
		close(dest_fd);
		exit(98);
	}

	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: On success, 0. On failure, an exit code.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
