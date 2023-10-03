#include "main.h"

/**
* create_file - create files
* @filename: name of file to create
* @text_content: content to be written into file
* Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, i;
	size_t cnt = 0;
	ssize_t write_byte;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = creat(filename, 0600);
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
		close(fd);
		if (write_byte == -1)
		{
			return (-1);
		}
		return (1);
	}
	return (1);
}
