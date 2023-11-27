#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void checkElfFileType(unsigned char *identification);
void printElfMagicNumbers(unsigned char *identification);
void printElfClass(unsigned char *identification);
void printElfDataFormat(unsigned char *identification);
void printElfVersion(unsigned char *identification);
void printElfOSABI(unsigned char *identification);
void printElfABI(unsigned char *identification);
void printElfType(unsigned int type, unsigned char *identification);
void printElfEntryPoint(unsigned long int entryPoint, unsigned char *identification);
void closeElfFile(int fileDescriptor);

/**
 * checkElfFileType - Checks if a file is an ELF file.
 * @identification: A pointer to an array containing the ELF magic numbers.
*/
void checkElfFileType(unsigned char *identification)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (identification[index] != 127 &&
				identification[index] != 'E' &&
				identification[index] != 'L' &&
				identification[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * printElfMagicNumbers - Prints the magic numbers of an ELF header.
 * @identification: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
*/
void printElfMagicNumbers(unsigned char *identification)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", identification[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printElfClass - Prints the class of an ELF header.
 * @identification: A pointer to an array containing the ELF class.
*/
void printElfClass(unsigned char *identification)
{
	printf("  Class:                             ");

	switch (identification[EI_CLASS])
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
			printf("<unknown: %x>\n", identification[EI_CLASS]);
	}
}

/**
 * printElfDataFormat - Prints the data format of an ELF header.
 * @identification: A pointer to an array containing the ELF data format.
*/
void printElfDataFormat(unsigned char *identification)
{
	printf("  Data:                              ");

	switch (identification[EI_DATA])
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
			printf("<unknown: %x>\n", identification[EI_CLASS]);
	}
}

/**
 * printElfVersion - Prints the version of an ELF header.
 * @identification: A pointer to an array containing the ELF version.
*/
void printElfVersion(unsigned char *identification)
{
	printf("  Version:                           %d",
			identification[EI_VERSION]);

	switch (identification[EI_VERSION])
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
 * printElfOSABI - Prints the OS/ABI of an ELF header.
 * @identification: A pointer to an array containing the ELF version.
*/
void printElfOSABI(unsigned char *identification)
{
	printf("  OS/ABI:                            ");

	switch (identification[EI_OSABI])
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
			printf("<unknown: %x>\n", identification[EI_OSABI]);
	}
}

/**
 * printElfABI - Prints the ABI version of an ELF header.
 * @identification: A pointer to an array containing the ELF ABI version.
*/
void printElfABI(unsigned char *identification)
{
	printf("  ABI Version:                       %d\n",
			identification[EI_ABIVERSION]);
}

/**
 * printElfType - Prints the type of an ELF header.
 * @type: The ELF type.
 * @identification: A pointer to an array containing the ELF class.
*/
void printElfType(unsigned int type, unsigned char *identification)
{
	if (identification[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

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
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", type);
	}
}

/**
 * printElfEntryPoint - Prints the entry point of an ELF header.
 * @entryPoint: The address of the ELF entry point.
 * @identification: A pointer to an array containing the ELF class.
*/
void printElfEntryPoint(unsigned long int entryPoint, unsigned char *identification)
{
	printf("  Entry point address:               ");

	if (identification[EI_DATA] == ELFDATA2MSB)
	{
		entryPoint = ((entryPoint << 8) & 0xFF00FF00) |
			((entryPoint >> 8) & 0xFF00FF);
		entryPoint = (entryPoint << 16) | (entryPoint >> 16);
	}

	if (identification[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entryPoint);
	else
		printf("%#lx\n", entryPoint);
}

/**
 * closeElfFile - Closes an ELF file.
 * @fileDescriptor: The file descriptor of the ELF file.
*/
void closeElfFile(int fileDescriptor)
{
	if (close(fileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fileDescriptor);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *	ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *elfHeader;
	int fileDescriptor, bytesRead;

	fileDescriptor = open(argv[1], O_RDONLY);
	if (fileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	elfHeader = malloc(sizeof(Elf64_Ehdr));
	if (elfHeader == NULL)
	{
		closeElfFile(fileDescriptor);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	bytesRead = read(fileDescriptor, elfHeader, sizeof(Elf64_Ehdr));
	if (bytesRead == -1)
	{
		free(elfHeader);
		closeElfFile(fileDescriptor);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checkElfFileType(elfHeader->e_ident);
	printf("ELF Header:\n");
	printElfMagicNumbers(elfHeader->e_ident);
	printElfClass(elfHeader->e_ident);
	printElfDataFormat(elfHeader->e_ident);
	printElfVersion(elfHeader->e_ident);
	printElfOSABI(elfHeader->e_ident);
	printElfABI(elfHeader->e_ident);
	printElfType(elfHeader->e_type, elfHeader->e_ident);
	printElfEntryPoint(elfHeader->e_entry, elfHeader->e_ident);

	free(elfHeader);
	closeElfFile(fileDescriptor);
	return (0);
}

