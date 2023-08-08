#include "main.h"

/**
 * _elfchecker - function that checks if file is an ELF file
 * @str: pointer to array of ELF magic numbers
 * Return: nothing
 */
void _elfchecker(unsigned char *str)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (str[i] != 127 && str[i] != 'E' &&
				str[i] != 'L' && str[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _print_magic - function that prints ELF header magic numbers
 * @str: pointer to array of ELF magic numbers
 * Return: nothing
 */
void _print_magic(unsigned char *str)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", str[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _print_class - function that prints ELF header class
 * @str: pointer to array of ELF class
 * Return: nothing
 */
void _print_class(unsigned char *str)
{
	printf("Class: ");

	switch (str[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", str[EI_CLASS]);
	}
}

/**
 * _print_data - function that prints ELF header data
 * @str: pointer to array of ELF data
 * Return: nothing
 */
void _print_data(unsigned char *str)
{
	printf("Data: ");

	switch (str[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", str[EI_CLASS]);
	}
}

/**
 * _print_version - function that prints ELF header version
 * @str: pointer to array of ELF version
 * Return: nothing
 */
void _print_version(unsigned char *str)
{
	printf("Version: %d", str[EI_VERSION]);

	switch (str[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * _print_osabi - function that prints ELF header osabi
 * @str: pointer to array of ELF osabi
 * Return: nothing
 */
void _print_osabi(unsigned char *str)
{
	printf("OS/ABI: ");

	switch (str[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", str[EI_OSABI]);
	}
}

/**
 * _print_abi - function that prints ELF header abi
 * @str: pointer to array of ELF abi
 * Return: nothing
 */
void _print_abi(unsigned char *str)
{
	printf("ABI Version: %d\n", str[EI_ABIVERSION]);
}

/**
 * _print_type - function that prints ELF header type
 * @type: ELF header type
 * @str: pointer to array of ELF type
 * Return: nothing
 */
void _print_type(unsigned int type, unsigned char *str)
{
	if (str[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("Type: ");

	switch (type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared  object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", type);
	}
}

/**
 * _print_entry - function that prints ELF header entry address
 * @entry: ELF header entry address
 * @str: pointer to array of ELF entry
 * Return: nothing
 */
void _print_entry(unsigned long int entry, unsigned char *str)
{
	printf("Entry point address: ");

	if (str[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0XFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (str[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * _elfclose - function that closes an ELF header file
 * @elf: ELF file descriptor
 * Return: nothing
 */
void _elfclose(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - program that display the information contained in
 * the ELF header at the start of an ELF file
 * @argc: number of arguments passed to the program
 * @argv: pointer array to each argument passed
 * Return: 0 if success
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	Elf64_Ehdr *header;
	int file_desc, bytes_rd;

	file_desc = open(argv[1], O_RDONLY);
	if (file_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		_elfclose(file_desc);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	bytes_rd = read(file_desc, header, sizeof(Elf64_Ehdr));
	if (bytes_rd == -1)
	{
		free(header);
		_elfclose(file_desc);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}
	_elfchecker(header->e_ident);
	printf("ELF Header:\n");
	_print_magic(header->e_ident);
	_print_class(header->e_ident);
	_print_data(header->e_ident);
	_print_version(header->e_ident);
	_print_osabi(header->e_ident);
	_print_abi(header->e_ident);
	_print_type(header->e_type, header->e_ident);
	_print_entry(header->e_entry, header->e_ident);

	free(header);
	_elfclose(file_desc);
	return (0);
}

