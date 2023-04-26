#include "main.h"

/**
 * _printf - variadic function
 * @format: named parameter specification of format
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count, num_args;

	count = 0;
	num_args = 0;
	va_start(args, format);
	if (format != NULL)
	{
		if (print_fmt(format, args, &count, &num_args) != -1)
		{
			count = count;
		}
	}
	else
	{
		return (-1);
	}
	va_end(args);
	return (count);
}

/**
 * print_fmt - _printf function format printing check
 * @format: named parameter specification of format
 * @args: variable arguments list
 * @count: pointer to integer to store the count of characters printed
 * @num_args: number of argument passed to the variadic function
 * Return: the number of characters printed
 */

int print_fmt(const char *format, va_list args, int *count, int *num_args)
{
	int i, j;
	fmt fmt_specs[] = {{'c', char_print}, {'s', string_print}, {'d', dec_print},
	{'i', int_print}, {'b', bin_print}, {'u', uint_print}, {'o', oct_print},
	{'x', hex_print}, {'X', cap_hex_print}, {'\0', NULL}};

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%') /* check for fmt spec */
		{ _putchar(format[i]);
			(*count)++; }
		else /* start fmt spec */
		{
			i++; /* increment to next character after the % */
			/* check for standalone % and if % is the last character*/
			if (format[i] == '\0')
				{ _putchar(format[i - 1]);
					(*count)++;
					return (-1); }
			for (j = 0; fmt_specs[j].fmt_sign != '\0'; j++)
			{
				if (format[i] == '%') /* print a percent sign */
				{ _putchar(format[i]);
					(*count)++;
					break; }
				else if (format[i] == (fmt_specs[j]).fmt_sign) /* valid fmt handling */
				{ (*num_args)++; /* increment num_args when a valid fmt spec is found */
					(fmt_specs[j]).fmt_func_ptr(args, count);
					break; }
				else if (fmt_specs[j + 1].fmt_sign == '\0') /* invalid fmt handling */
				{ _putchar('%');
					_putchar(format[i]);
					(*count) += 2;
					break; }
			}
		}
	}
	if (*num_args != va_arg(args, int))
		return (-1);
	return (*count);
}
