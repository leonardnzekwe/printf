#include "main.h"

/**
 * bin_print - decimal (base 10) printing function
 *  @args: variable argument list
 *  @count: pointer to integer to store the count of characters printed
 *	@flag: flag characters for non-custom conversion specifiers
 *  b - binary (unsigned int) parameter passed
 */

void bin_print(va_list args, int *count, char __attribute__ ((unused)) flag)
{
	unsigned int b, i, b_len, num;
	int j;
	char *digits;

	b = va_arg(args, unsigned int);
	num = b; /* hold the value of b before passing it to count logic */
	/* count number of digits */
	b_len = 0;
	while (b / 2 != 0)
	{
		b_len++;
		b = b / 2;
	}
	b_len++;
	/* dynamically allocate memory for digits array */
	digits = malloc(sizeof(char) * (b_len + 1));
	if (digits == NULL)
	{
		return;
	}
	/* convert integer to string of binary digits */
	i = 0;
	while (num / 2 != 0)
	{
		digits[i] = (num % 2) + '0';
		num = num / 2;
		i++;
	}
	digits[i] = (num % 2) + '0';
	/* print binary digits in reverse order */
	for (j = i; j >= 0; j--)
	{
		_putchar(digits[j]);
		(*count)++;
	}
	free(digits);
}
