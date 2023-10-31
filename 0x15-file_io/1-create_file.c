#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, num_lett, rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
		text_content = "";

	for (num_lett = 0; text_content[num_lett]; num_lett++)
		;
	rw = write(fd, text_content, num_lett);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}
