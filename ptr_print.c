#include "main.h"

/**
 * ptr_print - print memory address in hexadecimal format
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * ptr - pointer (void *) parameter passed
 */

void ptr_print(va_list args, int *count)
{
	unsigned long int ptr, ptr_value;
	int i, j, ptr_len;
	char hex_digits[] = "0123456789abcdef";
	char *hex_str;

	ptr = (unsigned long int)va_arg(args, void *);
	ptr_value = ptr; /* hold the value of hex b4 passing it to count */
	/* count number of digits */
	ptr_len = 0;
	while (ptr / 16 != 0)
	{
		ptr_len++;
		ptr = ptr / 16;
	}
	ptr_len++;
	/* dynamically allocate memory for hex string */
	hex_str = malloc(sizeof(char) * (ptr_len + 1));
	if (hex_str == NULL)
		return;
	/* convert pointer value to hexadecimal string */
	i = 0;
	while (ptr_value / 16 != 0)
	{
		hex_str[i] = hex_digits[ptr_value % 16];
		ptr_value = ptr_value / 16;
		i++;
	}
	hex_str[i] = hex_digits[ptr_value % 16];
	/* print the pointer address with leading "0x" */
	_putchar('0');
	_putchar('x');
	(*count) += 2;
	/* print digits in reverse order */
	for (j = i; j >= 0; j--)
	{
		_putchar(hex_str[j]);
		(*count)++;
	}
	free(hex_str);
}
