#include <stdio.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints its contents to stdout
* @filename: name of the file to read
* @letters: number of letters to read and print
* Return: the actual number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int fd;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
	{
		return (0);

	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}
	bytes_read = read(fd, buff, letters);
	if (bytes_read < 0)
	{
		free(buff);
		return (0);
	}
	buff[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1 || bytes_written < bytes_read)
	{
		free(buff);
		close(fd);
		return (0);

	}
	free(buff);
	close(fd);
	return (bytes_written);
}
