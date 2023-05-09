#include <stdio.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* append_text_to_file - Appends text to the end of a file
* @filename: name of the file
* @text_content: NULL terminated string to add to the end of the file
* Description: This function opens the file specified by @filename for writing
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int res = -1;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);

	}
	fd = open(filename, O_WRONLY  | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}

