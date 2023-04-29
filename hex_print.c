#include "main.h"

/**
 * hex_print - hexadecimal (base 16) printing function (lowercase)
 * @flag: flag characters for non-custom conversion specifiers
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * @space: space character for non-custom conversion specifiers
 * hex - hexadecimal (unsigned int) parameter passed
 */

void hex_print(char flag, va_list args,
	int *count, char __attribute__ ((unused)) space)
{
	unsigned int hex, i, hex_len, num;
	int j;
	char hex_digits[] = "0123456789abcdef";
	char *hex_str;

	hex = va_arg(args, unsigned int);
	num = hex; /* hold the value of hex b4 passing it to count */
	/* count number of digits */
	hex_len = 0;
	while (hex / 16 != 0)
	{ hex_len++;
		hex = hex / 16; }
	hex_len++;
	/* dynamically allocate memory for digits array */
	hex_str = malloc(sizeof(char) * (hex_len + 1));
	if (hex_str == NULL)
		return;
	/* convert unsigned int to str of digits in hexadecimal fmt */
	i = 0;
	while (num / 16 != 0)
	{ hex_str[i] = hex_digits[num % 16];
		num = num / 16;
		i++; }
	hex_str[i] = hex_digits[num % 16];
	if (flag == '#' && num != 0)
	{ _putchar('0');
		_putchar('x');
		(*count) += 2; }
	/* print digits in reverse order */
	for (j = i; j >= 0; j--)
	{ _putchar(hex_str[j]);
		(*count)++; }
	free(hex_str);
}
