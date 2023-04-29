#include "main.h"

/**
 * cap_hex_print - hexadecimal (base 16) printing function (uppercase)
 * @flag: flag characters for non-custom conversion specifiers
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * @space: space character for non-custom conversion specifiers
 * cap_hex - cap_hexadecimal (unsigned int) parameter passed
 */

void cap_hex_print(char flag, va_list args,
	int *count, char __attribute__ ((unused)) space)
{
	unsigned int cap_hex, i, cap_hex_len, num;
	int j;
	char cap_hex_digits[] = "0123456789ABCDEF";
	char *cap_hex_str;

	cap_hex = va_arg(args, unsigned int);
	num = cap_hex; /* hold the value of cap_hex b4 passing it to count */
	/* count number of digits */
	cap_hex_len = 0;
	while (cap_hex / 16 != 0)
	{
		cap_hex_len++;
		cap_hex = cap_hex / 16;
	}
	cap_hex_len++;
	/* dynamically allocate memory for digits array */
	cap_hex_str = malloc(sizeof(char) * (cap_hex_len + 1));
	if (cap_hex_str == NULL)
		return;
	/* convert unsigned int to str of digits in cap_hexadecimal fmt */
	i = 0;
	while (num / 16 != 0)
	{
		cap_hex_str[i] = cap_hex_digits[num % 16];
		num = num / 16;
		i++;
	}
	cap_hex_str[i] = cap_hex_digits[num % 16];
	if (flag == '#' && num != 0)
	{ _putchar('0');
		_putchar('X');
		(*count) += 2; }
	/* print digits in reverse order */
	for (j = i; j >= 0; j--)
	{
		_putchar(cap_hex_str[j]);
		(*count)++;
	}
	free(cap_hex_str);
}
