/*
 * File: 100-elf_header.c
 * Auth: Mohamed Elkharashy
 */

#include <elf.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * elf_check - function if a file is an Elf file.
 * @e_ident: array pointer containg the elf magic numbers
 *
 * Description: if the file not elf file then exit code 98
 */

void elf_check(unsigned char *e_ident)
{
	int x;

	for (x = 0; x < 4; x++)
	{
		if (e_ident[x] != '\x7f' && e_ident[x] != 'E' &&
		e_ident[x] != 'L' && e_ident[x] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * p_magic - print the magic numbers of an ELF header.
 * @e_ident: a pointer array containing the Elf magic numbers.
 *
 * Description: magic numbers are separated by spaces.
 */

void p_magic(unsigned char *e_ident)
{
	int y;

	printf(" Magic:  ");

	for (y = 0; y < EI_NIDENT; y++)
	{
		printf("%02x", e_ident[y]);

		if (y == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * p_class - function to print the class of an elf header
 * @e_ident: a pointer to an array containg the elf
 *
 * Description: print the class of an elf header.
 */

void p_class(unsigned char *e_ident)
{
	printf(" Class:                   ");

	switch(e_ident[EI_CLASS])
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
 * p_version - function to print the version of an elf header
 * @e_ident: a pointer array containing the elf version
 */

void p_version(unsigned char *e_ident)
{
	printf(" Version:                    %d", e_ident[EI_VERSION]);

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
 * p_data - function to print the data of elf header
 * @e_ident: pointer to array
 */

void p_data(unsigned char *e_ident)
{
	printf(" Data:                      ");

	switch(e_ident[EI_DATA])
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
 * p_abi - function the abi version of an elf header
 * @e_ident: pointer of an array containing the elf version
 */

void p_abi(unsigned char *e_ident)
{
	printf(" ABI Version:                 %d\n", e_ident[EI_ABIVERSION]);
}


/**
 * p_osABI - function to print os/abi of an elf header
 * @e_ident: point of array containing the elf version
 */

void p_osABI(unsigned char *e_ident)
{
	printf("  OS/ABI:                ");

	switch(e_ident[EI_OSABI])
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
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}


/**
 * p_type - function to print the type of elf header
 * @e_type: the elf type
 * @e_ident: pointer to array
 */

void p_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}

	printf("  Type:               ");

	switch(e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * elf_close - function to close the elf file
 * @elf: the file
 *
 * Description: if the file can not be closed then exit code 98
 */

void elf_close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}


/**
 * p_entry - function to print the entry point of elf header
 * @e_entry: the address of elf
 * @e_ident: the pointer of array
 */

void p_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:             ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);

		e_entry =  (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}


/**
 * main - function to display the info in the elf header
 * @argc: the number of arguments
 * @argv: the array
 *
 * Description:if the fuke is not an elf or func fails
 * Return: 0 always.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int xx, i;

	Elf64_Ehdr *head;

	xx = open(argv[1], O_RDONLY);

	if (xx  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);

		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));

	if (head == NULL)
	{
		elf_close(xx);

		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);

		exit(98);
	}
	i = read(xx, head, sizeof(Elf64_Ehdr));

	if (i == -1)
	{
		free(head);

		elf_close(xx);

		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);

		exit(98);
	}

	elf_check(head->e_ident);
	printf("ELF Header:\n");

	p_magic(head->e_ident);
	p_class(head->e_ident);
	p_data(head->e_ident);

	p_version(head->e_ident);
	p_osABI(head->e_ident);

	p_abi(head->e_ident);
	p_type(head->e_type, head->e_ident);
	p_entry(head->e_entry, head->e_ident);

	free(head);
	elf_close(xx);
	return (0);
}
