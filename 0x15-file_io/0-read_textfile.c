#include "main.h"
#include <stdlib.h>
/*
 * read_textfile - xxx 
 * @filename: xxx
 * @letters: xxx
 * Returns:xxx
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (w);
}
