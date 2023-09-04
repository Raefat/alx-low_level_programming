#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: pointer to file name
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || o == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
