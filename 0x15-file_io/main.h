#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void _elfchecker(unsigned char *str);
void _print_magic(unsigned char *str);
void _print_class(unsigned char *str);
void _print_data(unsigned char *str);
void _print_version(unsigned char *str);
void _print_abi(unsigned char *str);
void _print_osabi(unsigned char *str);
void _print_type(unsigned int type, unsigned char *str);
void _print_entry(unsigned long int entry, unsigned char *str);
void _elfclose(int elf);

#endif /* MAIN_HEADER */
