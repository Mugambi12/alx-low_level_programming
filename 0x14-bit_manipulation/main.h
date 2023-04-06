#ifndef MAIN_H
#define MAIN_H

/* Header guards to prevent multiple inclusion of the header */

/* Function prototypes for the functions defined in main.c */
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

/* End of header */
#endif /* MAIN_H */
