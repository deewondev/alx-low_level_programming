#include "main.h"

/**
 * _elf_checker - function that checks if file is an ELF file
 * @e_ident: pointer to array of ELF magic numbers
 * Return: nothing
 */
void _elf_checker(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _magic_stdout - function that prints ELF header magic numbers
 * @e_ident: pointer to array of ELF magic numbers
 * Return: nothing
 */
void _magic_stdout(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _class_stdout - function that prints ELF header class
 * @e_ident: pointer to array of ELF class
 * Return: nothing
 */
void _class_stdout(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * _data_stdout - function that prints ELF header data
 * @e_ident: pointer to array of ELF data
 * Return: nothing
 */
void _data_stdout(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * _version_stdout - function that prints ELF header version
 * @e_ident: pointer to array of ELF version
 * Return: nothing
 */
void _version_stdout(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
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
 * _osabi_stdout - function that prints ELF header osabi
 * @e_ident: pointer to array of ELF osabi
 * Return: nothing
 */
void _osabi_stdout(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
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
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * _abi_stdout - function that prints ELF header abi
 * @e_ident: pointer to array of ELF abi
 * Return: nothing
 */
void _abi_stdout(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * _type_stdout - function that prints ELF header type
 * @e_type: ELF header type
 * @e_ident: pointer to array of ELF type
 * Return: nothing
 */
void _type_stdout(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
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
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * _entry_stdout - function that prints ELF header entry address
 * @e_entry: ELF header entry address
 * @e_ident: pointer to array of ELF entry
 * Return: nothing
 */
void _entry_stdout(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * _elf_close - function that closes an ELF header file
 * @elf: ELF file descriptor
 * Return: nothing
 */
void _elf_close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
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
int main(int __attribute__((__unused__)) argc, char *argv[])
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
		_elf_close(file_desc);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	bytes_rd = read(file_desc, header, sizeof(Elf64_Ehdr));
	if (bytes_rd == -1)
	{
		free(header);
		_elf_close(file_desc);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}
	_elf_checker(header->e_ident);
	printf("ELF Header:\n");
	_magic_stdout(header->e_ident);
	_class_stdout(header->e_ident);
	_data_stdout(header->e_ident);
	_version_stdout(header->e_ident);
	_osabi_stdout(header->e_ident);
	_abi_stdout(header->e_ident);
	_type_stdout(header->e_type, header->e_ident);
	_entry_stdout(header->e_entry, header->e_ident);

	free(header);
	_elf_close(file_desc);
	return (0);
}

