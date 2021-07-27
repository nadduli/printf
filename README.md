PrintF -Team Project By Nadduli Dan and Nakanwagi Stacey.


This is repository is an implementation of printf by Taremowei Appah and Girum Ajebe, this implementation demonstartes the use of structs, typedefs, function pointers,variadic functions, write, as well as basic functions and loops in C. The files in this repository are compiled with gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c, and they demonstrate how printf works for various data types given the specifier. The files include;

    holberton.h: A header file containing are function prototypes used for the implementation of printf.

    _putchar.c: A function to print characters to stdout.

    printf.c: Prints a formatted string to stdout.

    format_specifiers.c: Contains the functions that implement the printing of a data type listed in the _printf function pointer f_list. The functions contained include;
        print_char: Prints a character to stdout.
        print_string: Prints a string to stdout.
        print_percent: Prints % to stdout.
        print_integer Prints an integer to stdout.

    print_number: The function used with the print_integer function to print numbers.

    parser.c: A functions that recieves the main string and all other arguments needed for _printf to print a formatted string to stdout. It is called in printf and serves as the _printf engine. It iterates through f_list and calls the functions pointed to by sym which are located in format_specifiers.c, and gives instructions regarding the general behaviour of _printf.

    man_3_printf: A man page for _printf.

    test: A directory containng a main.c file to test _printf.

Demonstration

A demonstration of the _printf function is illustrated below. It is important that the main.c is in the same directory as the _printf function and its other supporting functions, the program is compiled with the command gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c. The description and illustration is as follows;

_printf takes a formatted string as input, it checks for special characters in the string called specifiers which start with the % sign, and replaces them with their values in the formatted string and prints it to the stdout. These specifiers are:

    %c: Prints a single character.
    %s: Prints a string of characters.
    %d: Prints integers.
    %i: Prints integers.
    %%: Prints percent sign.

See the example below;

alex@ubuntu:~/c/printf$ cat main.c

#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
* main - Entry point
*
* Return: Always 0
*/

int main(void) {

int len;
int len2;


len = _printf("Let's try to printf a sentence.\n");
len2 = printf("Let's try to printf a sentence.\n");
 
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -9999);
printf("Negative:[%d]\n", -9999);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
return (0);

}

alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-9999]
Negative:[-9999]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]