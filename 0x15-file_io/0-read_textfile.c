#include "main.h"

/**
  * read_textfile - reads a text file and prints
  *	it to the POSIX standard output
  * @filename: the name of the file
  * @letters: the number of letters it should read and print
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL || letters == 0)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		close(file);
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (bytes_read);
}
