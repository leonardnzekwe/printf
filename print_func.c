#include "main.h"

/**
 * _printf - variadic function
 * @format: named parameter specification of format
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;

	count = 0;
	va_start(args, format);
	if (format != NULL)
	{
		count = print_fmt(format, args, &count);
	}
	va_end(args);
	return (count);
}

/**
 * print_fmt - _printf function format printing check
 * @format: named parameter specification of format
 * @args: variable arguments list
 * @count: pointer to integer to store the count of characters printed
 * Return: the number of characters printed
 */

int print_fmt(const char *format, va_list args, int *count)
{
	int i, j;

	fmt fmt_specs[] = {
		{'c', char_print},
		{'s', string_print},
		{'\0', NULL}
	}; /* fmt two dimensional array variable */
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%') /* check for fmt spec */
		{
			_putchar(format[i]);
			(*count)++;
		}
		else /* start fmt spec */
		{
			i++; /* increment to next character after the % */
			for (j = 0; fmt_specs[j].fmt_sign != '\0'; j++)
			{
				if (format[i] == '%') /* print a percent sign */
				{
					_putchar(format[i]);
					(*count)++;
					break;
				}
				else if (format[i] == (fmt_specs[j]).fmt_sign) /* valid fmt handling */
				{
					(fmt_specs[j]).fmt_func_ptr(args, count);
					break;
				}
				else if (fmt_specs[j + 1].fmt_sign == '\0') /* invalid fmt handling */
				{
					_putchar('%');
					_putchar(format[i]);
					(*count) += 2;
					break;
				}
			}
		}
	} return (*count);
}
