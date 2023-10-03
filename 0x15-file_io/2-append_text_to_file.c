#include "main.h"

/**
* append_text_to_file - append text at the end of a file
* @filename: name of file
* @text_content: content to be added to file
* Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	size_t cnt = 0;
	ssize_t write_byte;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			cnt++;
		}
		write_byte = write(fd, text_content, cnt);
		if (write_byte == -1)
		{
			return (-1);
		}

	}
	close(fd);
	return (1);
}
