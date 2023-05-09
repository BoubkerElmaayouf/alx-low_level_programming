#include "main.h"

/**
 * displayEntry - this funcion Prints the entry point of an ELF header.
 * @e_entry: address of the ELF entry point.
 * @e_ident: the pointer to an array containing the ELF class.
 * Return : NOTHING.
 */
void displayEntry(unsigned long int e_entry, unsigned char *e_ident)
{
        printf(" Entry point address: ");

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
 * closeElfFile - this function Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 * Description: If the file cannot be closed - exit code 98.
 */
void closeElfFile(int elf)
{
        if (close(elf) == -1)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't close fd %d\n", elf);
                exit(98);
        }
}

