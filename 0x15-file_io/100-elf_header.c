#include "main.h"

void verify_Elf(unsigned char *e_ident);
void displayMagic(unsigned char *e_ident);
void displayClass(unsigned char *e_ident);
void displayData(unsigned char *e_ident);
void displayVersion(unsigned char *e_ident);
void displayABI(unsigned char *e_ident);
void displayOSABI(unsigned char *e_ident);
void displayFileType(unsigned int e_type, unsigned char *e_ident);
void displayEntry(unsigned long int e_entry, unsigned char *e_ident);
void closeElfFile(int elf);

/**
 * verify_Elf - this function Checks if a file is an ELF file.
 * @e_ident: pointer to an array containing the ELF magic numbers.
 * Description: if the file is not an ELF file then exit code 98.
 */
void verify_Elf(unsigned char *e_ident)
{
	int index = 0;

	for (; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * displayMagic - this function Prints the magic numbers of an ELF header.
 * @e_ident: pointer to an array containing the ELF magic numbers.
 * Description: the Magic numbers are separated by spaces.
 */
void displayMagic(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");
	for (; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * displayClass - this function Prints the class of an ELF header.
 * @e_ident: pointer to an array containing the ELF class.
 */
void displayClass(unsigned char *e_ident)
{
	printf(" Class: ");

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
 * displayData - this function Prints the data of an ELF header.
 * @e_ident: pointer to an array containing the ELF class.
 */
void displayData(unsigned char *e_ident)
{
	printf(" Data: ");

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
 * main - this program Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success, exit code 98 if file is not an
 * ELF file or function fails.
 *
 * Description: This program reads the ELF header 
 * of a given file and displays relevant information. 
 * If the file is not an ELF File or the function fails - 
 * exit code 98 is returned.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, r;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closeElfFile(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		closeElfFile(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	verify_Elf(header->e_ident);
	printf("ELF Header:\n");
	displayMagic(header->e_ident);
	displayClass(header->e_ident);
	displayData(header->e_ident);
	displayVersion(header->e_ident);
	displayABI(header->e_ident);
	displayOSABI(header->e_ident);
	displayFileType(header->e_type, header->e_ident);
	displayEntry(header->e_entry, header->e_ident);

	free(header);
	closeElfFile(fd);
	return (0);
}

