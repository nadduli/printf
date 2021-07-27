<<<<<<< HEAD
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
=======
#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
>>>>>>> 1f77af68a235e3ad4a9be6206d5b2d8ec911066d

#endif  /* _HOLBERTON_H */
