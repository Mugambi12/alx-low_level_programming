#include "main.h"

/**
 * append_text_to_file - Appends a string of text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string of text to be appended to the file.
 * Return: If the function fails or filename is NULL, return -1.
 *   If the file does not exist or the user lacks write permissions, return -1.
 *   Otherwise, return 1.
 *
 * Author: Silas Mugambi
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
