#include "main.h"

/**
 * dec_print - decimal (base 10) printing function
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * @flag: flag characters for non-custom conversion specifiers
 * d - decimal (int) parameter passed
 */

void dec_print(va_list args, int *count, char flag)
{
	int d, i, j, d_len;
	unsigned int num, abs_num;
	char *digits;

	d = va_arg(args, int);
	(d < 0) ? (abs_num = d * -1) : (abs_num = d);
	num = abs_num; /* hold the value of abs_num b4 passing it to count */
	/* count number of digits */
	d_len = 0;
	while (abs_num / 10 != 0)
	{ d_len++;
		abs_num = abs_num / 10; }
	d_len++;
	digits = malloc(sizeof(char) * (d_len + 1));
	if (digits == NULL)
		return;
	/* convert integer to string of digits */
	i = 0;
	while (num / 10 != 0)
	{ digits[i] = (num % 10) + '0';
		num = num / 10;
		i++; }
	digits[i] = (num % 10) + '0';
	/* print (flag), - if negative, + if positive, ' ' if space*/
	if (d < 0)
	{ _putchar('-');
		(*count)++; }
	else if (flag == '+')
	{ _putchar('+');
		(*count)++; }
	else if (flag == ' ')
	{ _putchar(' ');
		(*count)++; }
	/* print digits in reverse order */
	for (j = i; j >= 0; j--)
	{ _putchar(digits[j]);
		(*count)++; }
	free(digits);
}

/**
 * int_print - integer printing function
 * @args: variable argument list
 * @count: pointer to integer to store the count of characters printed
 * @flag: flag characters for non-custom conversion specifiers
 * i - integer (int) parameter to print
 */

void int_print(va_list args, int *count, char flag)
{
	dec_print(args, count, flag);
}
