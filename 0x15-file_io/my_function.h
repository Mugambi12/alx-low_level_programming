#ifndef MY_FUNCTION_H
#define MY_FUNCTION_H

/*
 * Desc: Header file containing prototypes for all functions
 *       written in the 100-elf_header.c file in 0x14-file_io directory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <assert.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif /* MY_FUNCTION_H */
