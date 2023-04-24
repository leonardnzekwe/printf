#include "main.h"

/**
 * _printf - variadic function
 * @format: named parameter specification of format
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count;

	fmt fmt_specs[] = {
		{'c', char_print},
		{'s', string_print},
		{'\0', NULL}
	};

	count = 0;
	va_start(args, format);
	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
				_putchar(format[i]);
				count++;
			else
				i++;
				for (j = 0; fmt_specs[j].fmt_sign != '\0'; j++)
				{
					if (format[i] == '%')
						_putchar(format[i]);
						count++;
						break;
					else if (format[i] == (fmt_specs[j]).fmt_sign)
						(fmt_specs[j]).fmt_func_ptr(args);
						count++;
						break;
					else if (fmt_specs[j + 1].fmt_sign == '\0')
						_putchar('%');
						_putchar(format[i]);
						count += 2;
						break;
				}
		}
	}
	va_end(args);
	return (count);
}
