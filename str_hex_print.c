#include "main.h"

/**
 * str_hex_print - prints a string
 * With non-printable characters as hexadecimal (uppercase)
 * @flag: flag characters for non-custom conversion specifiers
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * @space: space character for non-custom conversion specifiers
 * str - string (char *) parameter passed
 */

void str_hex_print(char __attribute__ ((unused)) flag, va_list args,
	int *count, char __attribute__ ((unused)) space)
{
	char *str;
	int i;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
			{
				_putchar('0');
				_printf("%X", str[i]);
			}
			else
			{
				_printf("%X", str[i]);
			}
			(*count) += 4;
		}
		else
		{
			_putchar(str[i]);
			(*count)++;
		}
	}
}
