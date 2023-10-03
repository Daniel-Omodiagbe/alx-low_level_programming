#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of file
* @letters: number of letters in file
* Return: actual letters it could print or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_byte, write_byte;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer)
	{
		read_byte = read(fd, buffer, letters);
		if (read_byte > 0)
		{
			write_byte = write(STDOUT_FILENO, buffer, read_byte);
			free(buffer);
			close(fd);
		}
		if (write_byte == -1)
		{
			return (0);
		}
		return (write_byte);
	}
	free(buffer);
	close(fd);
	return (0);
}
