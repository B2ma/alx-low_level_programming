#include "main.h"

/**
  * error_print - prints error message to standard error
  * @sms: massage to print
  * @number: code to exit
  * @filename: name of file
  */
void error_print(const char *sms, const char *filename, int number)
{
	if (filename != NULL)
		dprintf(STDERR_FILENO, "%s %s\n", sms, filename);
	else
		dprintf(STDERR_FILENO, "%s\n", sms);
	exit(number);
}
/**
  * main - Entry point
  * @argc: argument count
  * @argv: Vector count
  * Return: 0, success
  */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_print("Usage: cp file_from", "file_to", 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_print("Error: Can't read from file", argv[1], 98);
	if (access(argv[2], F_OK) == 0 && access(argv[2], W_OK) != 0)
		error_print("Error: Can't write to file", argv[2], 99);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_print("Error: Can't write to file", argv[2], 99);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_print("Error: Can't write to file", argv[2], 99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_print("Error: Can't read from file", argv[1], 98);
	}
	if (close(fd_from) == -1)
	{
		error_print("Error: Can't close fd", "fd_from", 100);
	}
	else if (close(fd_to) == -1)
	{
		error_print("Error: Can't close fd", "fd_to", 100);
	}
	return (0);
}
