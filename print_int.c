#include "main.h"

/**
 * print_int - prints an integer
 * @list : list of arguements
 *
 * Return: number of printed characters
 */
int print_int(va_list list)
{
	int print_count;

	print_count = print_number(list);

	return (print_count);
}

int print_number(va_list args)
{
	unsigned int print_count, n, div, num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n <  0)
	{
		_putchar('-');
		num = n * -1;

		print_count = print_count + 1;
	}
	else
		num = n;

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
