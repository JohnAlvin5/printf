#ifndef main_h
#define main_h

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct convers_specif - contains conversion specifiers and pointers
 *      to the functions that do the specific conversions
 * @spcf : The conversion flag
 * @func : The conversion function
 */
typedef struct convers_specif
{
	char *spcf;
	int (*func)(va_list);
} convert;

int to_be_printed(const char *format, convert flag_list[], va_list arg_list);

int print_char(va_list list);

int print_str(va_list list);

int print_pct(va_list list);
int print_int(va_list list);
int print_binary(va_list list);
int unsigned_int(va_list list);
int print_number(va_list args);

#endif
