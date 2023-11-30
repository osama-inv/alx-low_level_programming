#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void check_elf(unsigned char *Tager);
void get_magic(unsigned char *Tager);
void get_class(unsigned char *Tager);
void get_data(unsigned char *Tager);
void get_version(unsigned char *Tager);
void get_abi(unsigned char *Tager);
void get_osabi(unsigned char *Tager);
void get_type(unsigned int Etye, unsigned char *Tager);
void get_entry(unsigned long int e_entry, unsigned char *Tager);
void close_elf(int elf);

/**
 * check_elf - C
 * @Tager: A
 *
 * Description: If
 */
void check_elf(unsigned char *Tager)
{
	int Ide;

	for (Ide = 0; Ide < 4; Ide++)
	{
		if (Tager[Ide] != 127 &&
		    Tager[Ide] != 'E' &&
		    Tager[Ide] != 'L' &&
		    Tager[Ide] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * get_class - Prints the class of an ELF header.
 * @Tager: A pointer to an array containing the ELF class.
 */
void get_class(unsigned char *Tager)
{
	printf("  Class:                             ");

	switch (Tager[EI_CLASS])
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
		printf("<unknown: %x>\n", Tager[EI_CLASS]);
	}
}
/**
 * get_magic - P
 * @Tager: A 
 *
 * Description: numbers are separated by spaces.
 */
void get_magic(unsigned char *Tager)
{
	int Ide;

	printf("  Magic:   ");

	for (Ide = 0; Ide < EI_NIDENT; Ide++)
	{
		printf("%02x", Tager[Ide]);

		if (Ide == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * get_data - P
 * @Tager: A 
 */
void get_data(unsigned char *Tager)
{
	printf("  Data:                              ");

	switch (Tager[EI_DATA])
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
		printf("<unknown: %x>\n", Tager[EI_CLASS]);
	}
}

/**
 * get_version - Prints 
 * @Tager: A pointer
 */
void get_version(unsigned char *Tager)
{
	printf("  Version:                           %d",
	       Tager[EI_VERSION]);

	switch (Tager[EI_VERSION])
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
 * get_entry - Pri
 * @e_entry: The a
 * @Tager: A poi
 */
void get_entry(unsigned long int e_entry, unsigned char *Tager)
{
	printf("  Entry point address:               ");

	if (Tager[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (Tager[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Clo
 * @elf: The f
 *
 * Description: If the file
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * get_osabi - Prints 
 * @Tager: A pointer
 */
void get_osabi(unsigned char *Tager)
{
	printf("  OS/ABI:                            ");

	switch (Tager[EI_OSABI])
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
		printf("<unknown: %x>\n", Tager[EI_OSABI]);
	}
}

/**
 * get_abi - Print
 * @Tager: A
 */
void get_abi(unsigned char *Tager)
{
	printf("  ABI Version:                       %d\n",
	       Tager[EI_ABIVERSION]);
}

/**
 * get_type - Prints
 * @Etye: The
 * @Tager: A p
 */
void get_type(unsigned int Etye, unsigned char *Tager)
{
	if (Tager[EI_DATA] == ELFDATA2MSB)
		Etye >>= 8;

	printf("  Type:                              ");

	switch (Etye)
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
		printf("<unknown: %x>\n", Etye);
	}
}
/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->Tager);
	printf("ELF Header:\n");
	get_magic(header->Tager);
	get_class(header->Tager);
	get_data(header->Tager);
	get_version(header->Tager);
	get_osabi(header->Tager);
	get_abi(header->Tager);
	get_type(header->Etye, header->Tager);
	get_entry(header->e_entry, header->Tager);

	free(header);
	close_elf(o);
	return (0);
}
