#include "main.h"

/**
 * displayVersion - this function Prints the version of an ELF header.
 * @e_ident: pointer to an array containing the ELF version.
 */
void displayVersion(unsigned char *e_ident)
{
         printf(" Version: %d",
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
 * displayABI - this function Prints the OS/ABI of an ELF header.
 * @e_ident: pointer to an array containing the ELF version.
 */
void displayABI(unsigned char *e_ident)
{
        printf(" OS/ABI: ");

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
 * displayOSABI - this function Prints the ABI version of an ELF header.
 * @e_ident: pointer to an array containing the ELF ABI version.
 */
void displayOSABI(unsigned char *e_ident)
{
        printf(" ABI Version: %d\n",
                e_ident[EI_ABIVERSION]);
}

/**
 * displayFileType - This function Prints the type of an ELF header.
 * @e_type: A ELF type.
 * @e_ident: The  pointer to an array containing the ELF class.
 */
void displayFileType(unsigned int e_type, unsigned char *e_ident)
{
        if (e_ident[EI_DATA] == ELFDATA2MSB)
                e_type >>= 8;

        printf(" Type: ");

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
