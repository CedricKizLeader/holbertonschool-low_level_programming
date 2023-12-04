#include "main.h"

/**
 * create_file - Creates a file and writes the specified content to it
 *
 * @filename: Name of the file to create
 * @text_content: Content to write into the file
 *
 * Return: 1 on success, -1 on failure
 *         Empty file if @text_content is NULL
 */

int create_file(const char *filename, char *text_content)

{
	int file_descriptor;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	write(file_descriptor, text_content, strlen(text_content));
	close(file_descriptor);
	return (1);
}
