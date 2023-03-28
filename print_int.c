#include "main.h"

/**
 * print_int - prints an integer
 * @list : list of arguements
 * conversion specifier of integers
 * Return: number of printed characters
 */
int print_int(va_list list)
{
	int print_count, x, div;
	unsigned int num;

	x = va_arg(list, int);
	div = 1;
	print_count = 0;

	if (x < 0)
	{
		_putchar('-');
		num = x * -1;

		print_count = print_count + 1;
	}
	else
		num = x;

	while ((num / div) > 9)
		div = div * 10;

	while (div != 0)
	{
		_putchar('0' + (num / div));
		num = num % div;
		div = div / 10;

		print_count = print_count + 1;
	}

	return (print_count);
}
