#include "main.h"

/**
 * print_char - prints a character
 * @list : list of arguements
 *
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	
	return (1);
}

/**
 * print_str - prints a string
 * @list : list of arguements
 *
 * Return: number of characters printed
 */
int print_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (!str)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_pct - Prints percent symbol
 *
 * Return: number of printed characters
 */
int print_pct(__attribute__((unused))va_list list)
{
	_putchar('%');

	return (1);
}
