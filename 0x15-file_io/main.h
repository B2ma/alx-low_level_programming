#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#define BUFFER_SIZE 1024

#ifdef __x86_64__
#include <elf.h>
#define ELF_HEADER_SIZE 64
typedef Elf64_Ehdr Elf_Ehdr;
#else
#include <elf32.h>
#define ELF_HEADER_SIZE 52
typedef Elf32_Ehdr Elf_Ehdr;
#endif

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_print(const char *msg, const char *filename, int number);
void print_elf_header(int fd);
#endif
