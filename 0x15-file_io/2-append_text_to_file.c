#include "main.h"
/**
 * append_text_to_file - xxx
 * @filename: xxx
 * @text_content: xxx
 * Return: xxx
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	ssize_t res, i, n;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		n = i;

	if (text_content != NULL)
		res = write(o, text_content, n);
	close(o);
	if (res == -1)
		return (-1);
	return (1);
}
