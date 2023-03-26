#include "main.h"

/**
 * printf - produces output according to a format
 * @format - a character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	convert spcf_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"u", unsigned_int},
		{"o", print_octal},
		{"x", print_hex_low},
		{"X", print_hex_UP},
		{NULL, NULL}
	};
	int print_count;

	va_list arg_list;

	if (!format)	/* checks if format is null */
		return (-1);

	va_start(arg_list, format);

	/* to_be_printed prints the text and checks the conversion
	 * specifiers. We will create it */
	print_count = to_be_printed(format, spcf_list, arg_list);

	va_end(arg_list);

	return (print_count);
}
