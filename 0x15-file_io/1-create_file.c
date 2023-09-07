#include "main.h"

/**
* create_file - creates a file
* @filename: name of file to be created
* @text_content: content to be inserted into file
* Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, file_write, i, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			count++;
		}
		count = count + 1;
	}
	umask(0);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd)
	{
		file_write = write(fd, text_content, count);
		if (file_write)
		{
			close(fd);
			return (1);
		}
		close(fd);
		return (-1);
	}
	return (-1);
}
