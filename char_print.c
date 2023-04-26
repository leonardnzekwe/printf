#include "main.h"

/**
 * char_print - character printing
 * @args: variable arguments list
 * @count: pointer to integer to store the count of characters printed
 * @flag: flag characters for non-custom conversion specifiers
 * c - int parameter to print promoted from char
 * char is promoted to int when passed to the elipses
 */

void char_print(va_list args, int *count, char __attribute__ ((unused)) flag)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	(*count)++;
}
