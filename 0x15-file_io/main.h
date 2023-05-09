#ifndef MAIN_H
#define MAIN_H

/* Libraries : */
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/* prototypes for 100-elf_header.c */
void displayVersion(unsigned char *e_ident);
void displayABI(unsigned char *e_ident);
void displayOSABI(unsigned char *e_ident);
void displayFileType(unsigned int e_type, unsigned char *e_ident);
void displayEntry(unsigned long int e_entry, unsigned char *e_ident);
void closeElfFile(int elf);

/* Prototypes : */
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
#endif
