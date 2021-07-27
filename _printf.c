#include "holberton.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * validate_operator - validate if it is an operator
 * @format: Format to print to the console
 * Return: 1 if is positive; 0 if is negative
 */
int validate_operator(char format)
{
	char operator[] = {'c', 's', 'd', 'i', 'u', 'x',
						 'X', 'S', 'o', 'r', 'R', 'b', '%'};
	int i = 0;

	while (operator[i])
	{
		if (operator[i] == format)
			return (1);
		i++;
	}
	return (0);
}

/**
 * _printf - Simulates the printf function
 * @format: Format to print to the console
 * Return: number of char printed
=======
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
>>>>>>> 1f77af68a235e3ad4a9be6206d5b2d8ec911066d
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
<<<<<<< HEAD
	unsigned int i = 0, result = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] != '%')
			result += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			while (format[i] == ' ')
				i++;
			if (format[i] == '%')
				result += _putchar(format[i]);
			else if (validate_operator(format[i]) == 0)
			{
				result += _putchar('%');
				if (format[i - 1] == ' ')
					result += _putchar(' ');
				result += _putchar(format[i]);
			}
			else
				result += select_function(format[i], list);
		}
		i++;
	}
	va_end(list);
	return (result);
=======
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
>>>>>>> 1f77af68a235e3ad4a9be6206d5b2d8ec911066d
}
