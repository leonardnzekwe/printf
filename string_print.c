#include "main.h"

/**
 * string_print - string printing function
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * s - string (char *) parameter to print
 */

void string_print(va_list args, int *count)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s)
	{
		_putchar(*s);
		(*count)++;
		s++;
	}
}