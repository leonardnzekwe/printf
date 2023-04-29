#include "main.h"

/**
 * oct_print - unsigned integer printing function in octal format (base 8)
 * @flag: flag characters for non-custom conversion specifiers
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * @space: space character for non-custom conversion specifiers
 * o - unsigned integer (unsigned int) parameter to print in octal format
 */

void oct_print(char flag, va_list args,
	int *count, char __attribute__ ((unused)) space)
{
	unsigned int o, i, o_len, num;
	int j;
	char *digits;

	o = va_arg(args, unsigned int);
	num = o; /* hold the value of u b4 passing it to count */
	/* count number of digits */
	o_len = 0;
	while (o / 8 != 0)
	{
		o_len++;
		o = o / 8;
	}
	o_len++;
	/* dynamically allocate memory for digits array */
	digits = malloc(sizeof(char) * (o_len + 1));
	if (digits == NULL)
		return;
	/* convert unsigned int to str of digits in octal fmt */
	i = 0;
	while (num / 8 != 0)
	{
		digits[i] = (num % 8) + '0';
		num = num / 8;
		i++;
	}
	digits[i] = (num % 8) + '0';
	if (flag == '#' && num != 0)
	{ _putchar('0');
		(*count)++; }
	/* print digits in reverse order */
	for (j = i; j >= 0; j--)
	{
		_putchar(digits[j]);
		(*count)++;
	}
	free(digits);
}
