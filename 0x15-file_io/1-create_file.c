#include "main.h"
/**
 * create_file - create a new file
 * @filename: fname
 * @text_content: text to write
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int i, file, wfile;

	if (filename == NULL)
		return (-1);
	
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		wfile = write(file, text_content, i - 1);
		if (wfile == -1)
			return (-1);
	}
	close(file);
	return (1);
}
