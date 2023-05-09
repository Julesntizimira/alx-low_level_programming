# include "main.h"
# include <elf.h>
# include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <string.h>
#include <elf.h>
#include <stdint.h>
#define ELF_ENDIANNESS ELFDATA2LSB
#define EI_DATA   5
#define ELFDATA2MSB 2
#define ELFDATA2LSB 1
#define EI_CLASS  4
#define ELFCLASS32 1

void check_elf_magic(unsigned char *);
void print_elf_magic(unsigned char *);
void print_elf_class(unsigned char *);
void print_elf_data(unsigned char *);
void print_elf_version(unsigned char *);
void print_osabi(unsigned char *);
void print_abi_version(unsigned char *);
void print_elf_type(uint16_t);
void print_entry_point_address(uint64_t);
/**
 * check_elf_magic - Checks if a file is an ELF file by verifying its magic numbers.
 * @magic_nums: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf_magic(unsigned char *magic_nums)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (magic_nums[index] != 127 &&
				magic_nums[index] != 'E' &&
				magic_nums[index] != 'L' &&
				magic_nums[index] != 'F')
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_elf_magic - Prints the magic numbers of an ELF header.
 * @magic_nums: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_elf_magic(unsigned char *magic_nums)
{
	int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", magic_nums[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_elf_class - Prints the ELF class of an ELF header.
 * @magic_nums: A pointer to an array containing the ELF magic numbers.
 *
 * Description: The ELF class determines if the ELF file is 32-bit or 64-bit.
 */
void print_elf_class(unsigned char *magic_nums)
{
	printf("  Class:                             ");

	if (magic_nums[EI_CLASS] == ELFCLASSNONE)
		printf("Invalid class\n");
	else if (magic_nums[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (magic_nums[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", magic_nums[EI_CLASS]);
}
/**
 * print_elf_data - Prints the byte order of an ELF header.
 * @magic_nums: A pointer to an array containing the ELF magic numbers.
 *
 * Description: The byte order determines if the ELF file is little-endian or big-endian.
 */
void print_elf_data(unsigned char *magic_nums)
{

	printf("  Data:                              ");

	if (magic_nums[EI_DATA] == ELFDATANONE)
		printf("Invalid data encoding\n");
	else if (magic_nums[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (magic_nums[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", magic_nums[EI_DATA]);
}
/**
 * print_elf_version - Prints the ELF file version.
 * @magic_nums: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the version is invalid, exit code 98 is returned.
 */
void print_elf_version(unsigned char *magic_nums)
{

	unsigned char version = magic_nums[EI_VERSION];

	printf("  Version:                           ");
	if (version == EV_CURRENT)
		printf("%d (current)", version);
	else
	{
		dprintf(STDERR_FILENO, "Error: Invalid ELF version\n");
		exit(98);
	}
	printf("\n");
}
/**
 * print_osabi - Prints the OS/ABI of the ELF file.
 * @magic_nums: A pointer to an array containing the ELF magic numbers.
 */
void print_osabi(unsigned char *magic_nums)
{

	printf("  OS/ABI:                            ");

	switch (magic_nums[EI_OSABI])
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
		printf("<unknown: %x>\n", magic_nums[EI_OSABI]);
	}
}
/**
 * print_abi_version - Prints the ABI version of the ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void print_abi_version(unsigned char *e_ident)
{
	unsigned char abi_version = e_ident[EI_ABIVERSION];

	printf("  ABI Version:                       %d\n", abi_version);
}
/**
 * print_elf_type - Prints the type of the ELF file.
 * @e_type: The type value from the ELF header.
 */
void print_elf_type(uint16_t e_type)
{
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
 * Prints the entry point address of an ELF header.
 *
 * @param e_entry The address of the ELF entry point.
 * @param e_ident A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0x00FF00FF);
		e_entry = ((e_entry << 16) & 0xFFFF0000) |
			((e_entry >> 16) & 0x0000FFFF);
		e_entry = (e_entry << 32) | (e_entry >> 32);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
/**
 * print_entry_point_address - Prints the entry point address of the ELF file.
 * @e_entry: The entry point address value from the ELF header.
 */
void print_entry_point_address(uint64_t e_entry)
{
	unsigned char e_ident[EI_NIDENT] = {0x7F, 'E', 'L', 'F', ELFCLASS32, ELFDATA2LSB};
	
	print_entry(e_entry, e_ident);
}
/**
 * main - funct
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char **argv)
{
	int fd;

	Elf64_Ehdr header;
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <ELF file>\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: file error1\n");
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: file error2\n");
		exit(98);
	}
	check_elf_magic(header.e_ident);
	print_elf_magic(header.e_ident);
	print_elf_class(header.e_ident);
	print_elf_data(header.e_ident);
	print_elf_version(header.e_ident);
	print_osabi(header.e_ident);
	print_abi_version(header.e_ident);
	print_elf_type(header.e_type);
	print_entry_point_address(header.e_entry);
	close(fd);
	return (0);
}
