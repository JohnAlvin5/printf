#include "main.h"

/**
 * to_be_printed - Processes _printf string checking for specifiers
 * @format : string containing all  the characters to print
 * @flag_list : list of conversion functions
 * @arg_list : list of arguements passed
 *
 * Return: number of characters printed
 */
int to_be_printed(const char *format, convert flag_list[], va_list arg_list)
{
	int i, j;
	int print_count = 0;
	int func;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; flag_list[j].spcf != NULL; j++)
			{
				if (format[i + 1] == flag_list[j].spcf[0])
				{
					func = flag_list[j].func(arg_list);
					if (func == -1)
						return (-1);
					print_count = print_count + func;
					break;
				}
			}
			if (flag_list[j].spcf == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					print_count = print_count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			print_count = print_count + 1;
		}
	}
	return (print_count);
}
