#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define _INT_MAX_ 2147483647
/*fff*/
/**
 * struct Ftype - Struct operator
 *
 * @c: Parameter char (%s, %c, %i, ...)
 * @f: The function associated
 */
struct Ftype
{
	char c;
	int (*f)(va_list);
} ftype;
typedef struct Ftype f_type;

/* main functions */
int _printf(const char *format, ...);
int select_function(char format, va_list list);

/* print functions : type char */
int print_char(va_list lista);
int print_str(va_list lista);
int print_rev_str(va_list lista);
int print_Str_Ascii(va_list arg);

/* print functions : type numbers */
int putN(unsigned int n, unsigned int b, char *nums);
int print_int(va_list lista);
int print_bin(va_list lista);
int print_unsigned(va_list lista);

/* print bases */
int print_octal(va_list lista);
int print_rot13(va_list lista);
int print_hex(va_list lista);
int print_HEX(va_list lista);

/* functions from standar library in f_library like putchar and others*/
int _putchar(char c);
int _strlen(char *s);
int _atoi(char *str);
int	print_HEXADECIMAL(unsigned int n);

#endif
