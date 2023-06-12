#include "main.h"

/**
  * error_print - prints error message to standard error
  * @sms: massage to print
  * @number: code to exit
  */
void error_print(const char *sms, int number)
{
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
		error_print("Usage: cp file_from file_to", 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_print("Error: Can't read from file", 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
		error_print("Error: Can't write to file", 99);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_print("Error: Can't write to file", 99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_print("Error: Can't read from file", 98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
		error_print("Error: Can't close fd", 100);
	return (0);
}
