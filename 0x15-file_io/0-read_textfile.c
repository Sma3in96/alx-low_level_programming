#include "main.h"
/**
 * read_textfile - read a text from a file
 * @filename: file to read
 * @letters: number of char to read
 * Return: number of char printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t chars, file; 
	ssize_t chars2;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);	
	return (0);
	p = malloc(letters * sizeof(char));
	if (p == NULL)
		return (0);
	chars = read(file, p, letters);
	if (chars == -1)
		return (0);
	chars2 = write(STDOUT_FILENO, p, chars);
	if (chars2 == -1)
		return (0);
	close (file);
	free(p);
	return (chars2);
}
