#include "main.h"

/**
 * uint_print - unsigned integer printing function
 * @flag: flag characters for non-custom conversion specifiers
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * @space: space character for non-custom conversion specifiers
 * u - unsigned integer (unsigned int) parameter to print
 */

void uint_print(char __attribute__ ((unused)) flag, va_list args,
	int *count, char __attribute__ ((unused)) space)
{
	unsigned int u, i, u_len, num;
	int j;
	char *digits;

	u = va_arg(args, unsigned int);
	num = u; /* hold the value of u before passing it to count logic */
	/* count number of digits */
	u_len = 0;
	while (u / 10 != 0)
	{
		u_len++;
		u = u / 10;
	}
	u_len++;
	/* dynamically allocate memory for digits array */
	digits = malloc(sizeof(char) * (u_len + 1));
	if (digits == NULL)
		return;
	/* convert unsigned integer to string of digits */
	i = 0;
	while (num / 10 != 0)
	{
		digits[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	digits[i] = (num % 10) + '0';
	/* print digits in reverse order */
	for (j = i; j >= 0; j--)
	{
		_putchar(digits[j]);
		(*count)++;
	}
	free(digits);
}
