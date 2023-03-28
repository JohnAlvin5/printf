#include "main.h"

/**
 * _printf - produces output according to a format
 * @format : a character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	convert flag_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	int print_count;

	va_list arg_list;

	if (!format)
		return (-1);

	va_start(arg_list, format);

	print_count = to_be_printed(format, flag_list, arg_list);

	va_end(arg_list);

	return (print_count);
}
