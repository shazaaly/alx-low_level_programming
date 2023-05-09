#include <stdio.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

/**
* main - entry point for the cp command program
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: 0 on success, 1 if an error occurred during file I/O operations
*/
int main(int argc, char *argv[])
{
	const char *file_from_name = argv[1];
	const char *file_to_name = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Open the source file for reading*/
	copy_file(file_from_name, file_to_name);
	return (0);
}
/**
* fd_closer - closes a file descriptor
* @fd: the file descriptor to close
* Return: 0 on success, 100 if the close system call fails
*/
int fd_closer(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	return (0);
}
/**
* copy_file - copies the contents of one file to another
* @file_from_name: the name of the source file
* @file_to_name: the name of the destination file
* Return: 0 on success, -1 on failure
*/
int copy_file(const char *file_from_name, const char *file_to_name)
{
	ssize_t bytes_read, bytes_written;
	int fd;
	int fd1;
	char buffer[1024];

	fd = open_source(file_from_name);
	fd1 = open_dest(file_to_name);

	/*Copy the contents of the source file to the destination file*/

	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd1, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", file_to_name);
			fd_closer(fd);
			fd_closer(fd1);
			exit(99);
		}
	}
	/*Check if read or write errors occurred*/
	if (bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from_name);
	fd_closer(fd);
	fd_closer(fd1);
	exit(98);
	}
	fd_closer(fd);
	fd_closer(fd1);
	return (0);
}

/**
* open_source - opens the source file for reading
* @file_from_name: the name of the source file
* Return: the file descriptor on success, -1 on failure
*/
int open_source(const char *file_from_name)
{
	int fd;

	fd = open(file_from_name, O_RDONLY);
	if (fd == -1 || buffer == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from_name);
		exit(98);
	}
	return (fd);
}
/**
* open_dest - opens the destination file for writing
* @file_to_name: the name of the destination file
* Return: the file descriptor on success, -1 on failure
*/
int open_dest(const char *file_to_name)
{
	int fd;

	fd = open(file_to_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1 || buffer == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n",
			file_to_name);
			fd_closer(fd);
			exit(99);
	}
	return (fd);
}
