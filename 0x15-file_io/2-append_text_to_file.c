#include "main.h"
/**
 * append_text_to_file - add a text to a file
 * @filename: file's name
 * @text_content: text to add
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, wfile;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i  = 0; text_content[i]; i++)
		;
	wfile = write(file, text_content, i);
	if (wfile == -1)
		return (-1);

	close(file);
	return (1);
}
