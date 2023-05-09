#include <stdio.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
* create_file - creates a file with the specified name
* text content to it
* @filename: the name of the file to create
* @text_content: a null-terminated string
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
	{
		return (-1);

	}
	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);

	}
	close(fd);
	return (1);
}

