#include <stdio.h>
#include "main.h"
/**
 * handleerror - handle
 * @file_to: fd1
 * @file_from: fd2
 * Return: void
 */
void handleerror(int file_to, int file_from, char *argv[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - entry point
 * @argc: int of argument
 * @argv: vect of arguments
 *
 * Return: O
 */
int main(int argc, char *argv[])
{
	int file_from, rfile_from;
	char buffer[1024];
	int file_to, wfile_to, file_close;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		handleerror(-1, 0, argv);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
		handleerror(0, -1, argv);
	rfile_from = 1024;
	while (rfile_from)
	{
		rfile_from = read(file_from, buffer, 1024);
		if (rfile_from == -1)
			handleerror(-1, 0, argv);
		wfile_to = dprintf(file_to, "%s", buffer);
		if (wfile_to == -1)
			handleerror(0, -1, argv);
	}
	file_close = close(file_from);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close(file_to);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
