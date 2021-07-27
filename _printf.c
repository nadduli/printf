#include "holberton.h"

/**
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
 */
int _printf(const char *format, ...)
{
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
}
