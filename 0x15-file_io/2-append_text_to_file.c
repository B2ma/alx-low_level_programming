#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: is the name of the file
  * @text_content: NULL terminated string to add at the end of the file
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_length;
	FILE *file;

	if (filename == NULL)
		return (-1);
	if ((filename != NULL && text_content == NULL) || text_content == NULL)
		return (1);
	file = fopen(filename, "r");
	if (file == NULL)
		return (-1);
	fclose(file);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (text_length = 0; text_content[text_length]; text_length++)
		;
	bytes_written = write(fd, text_content, text_length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
