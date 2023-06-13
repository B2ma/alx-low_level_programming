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
  * print_elf_header- prints the information contained in the ELF headeder
  * @fd: file descriptor
  */
void print_elf_header(int fd)
{
	unsigned char magic[16];
	Elf64_Ehdr header;
	off_t offset;
	unsigned long int i;
	ssize_t bytes_read = read(fd, magic, sizeof(magic));

	if (bytes_read == 1 || bytes_read < (ssize_t)sizeof(magic))
		error_print ("Can't read ELF magic Numbers", NULL, 98);
	if (magic[0] != 0x7f || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F')
		error_print ("Not and ELF file", NULL, 98);
	offset = lseek(fd, ELF_HEADER_SIZE - sizeof(magic), SEEK_SET);
	if (offset == -1)
		error_print("Can't seek to  ELF header", NULL, 98);
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1 || bytes_read < (ssize_t)sizeof(header))
		error_print("Can't read ELF headr", NULL, 98);
	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < sizeof(magic); i++)
	{
		printf("%02x ", magic[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header.e_ident[EI_CLASS]
			== ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header.e_ident[EI_DATA] ==
			ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header.e_ident
			[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", header.e_ident[EI_OSABI]
			== ELFOSABI_SYSV ? "UNIX - System V" : "Others");
	printf("  ABI Version:                       %d\n", header.e_ident
			[EI_ABIVERSION]);
	printf("  Type:                              %s\n", header.e_type == ET_EXEC ?
			"Executable file" :
			(header.e_type == ET_DYN ? "Shared object file" : "Others"));
	printf("  Entry point address:               %#lx\n", (unsigned long)
			header.e_entry);
}
/**
  * main - Entry point
  * @argc: number of arguments
  * @argv: pointer to the arguments' strings
  * Return: 0,Success.
  */
int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		error_print("Usage: elf_header elf_filename", NULL, 97);
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		error_print("Can't read the file", argv[1], 98);
	print_elf_header(fd);
	if (close(fd) == -1)
		error_print("Can't close file descriptor", NULL, 100);
	return (0);
}
