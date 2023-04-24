#include "main.h"

/**
 * _printf - variadic function
 * @format: named parameter specification of format
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, count;
	fmt fmt_specs[] = {
		{'c', char_print},
		{'s', string_print}
	};

	va_start(args, format);
	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				count++;
			}
			else if (format[i] == '%')
			{
				continue;
				if (format[i] == (fmt_specs[i]).fmt_sign)
				{
					(fmt_specs[i]).fmt_func_ptr(args);
					count++;
				}
			}
		}
	}
	va_end(args);
	return (count);
}
