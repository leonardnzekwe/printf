#include "main.h"

/**
 * char_print - character printing
 * @args: variable arguments list
 * @count: pointer to integer to store the count of characters printed
 * c - int parameter to print promoted from char
 * char is promoted to int when passed to the elipses
 */

void char_print(va_list args, int *count)
{
	char c;

	c = va_arg(args, int);
	if (c == '\0')
	{
		return;
	}
	_putchar(c);
	(*count)++;
}
