#include "main.h"
/**
 * create_file - xxx
 * @filename: xxx
 * @text_content: xxx
 * Return: xxx
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, res = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (res = 0; text_content[res];)
			res++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, res);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
