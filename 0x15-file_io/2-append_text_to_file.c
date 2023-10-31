#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_lett, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);

	if (text_content)
	{
		for (num_lett = 0; text_content[num_lett]; num_lett++)
			;
		wr = write(fd, text_content, num_lett);

		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
