#include <stdio.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - reads a text file and prints its contents to stdout
* @filename: name of the file to read
* @letters: number of letters to read and print
* Return: the actual number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int i;
	size_t count = 0;
	int fd;
	char buffer[1024];

	if (filename == NULL)
	{
		return (0);

	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	while ((n = read(fd, buffer, sizeof(buffer))) > 0 && count < letters)
	{
		for (i = 0; i < n; i++)
		{
			count += n;
		}
		if (write(STDOUT_FILENO, buffer, n) != n)
		{
			close(fd);
			return (0);
		}
	}
	close(fd);
	return (count);
}
