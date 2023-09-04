#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file.
 * @filename: pointer to file name
 * @text_content: text to append to file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[len])
		len++;
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content)
		w = write(o, text_content, len);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
