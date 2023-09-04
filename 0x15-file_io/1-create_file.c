#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to file name
 * @text_content: text to add to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[len])
		len++;
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
		text_content = "";
	w = write(o, text_content, len - 1);
	if (w == -1 || o == -1)
		return (-1);
	close(o);
	return (1);
}
