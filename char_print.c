#include "main.h"

/**
 * char_print - character printing
 * @flag: flag characters for non-custom conversion specifiers
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * @space: space character for non-custom conversion specifiers
 * c - int parameter to print promoted from char
 * char is promoted to int when passed to the elipses
 */

void char_print(char __attribute__ ((unused)) flag, va_list args,
		int *count, char __attribute__ ((unused)) space)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	(*count)++;
}
