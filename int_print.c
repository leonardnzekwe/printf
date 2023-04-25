#include "main.h"

/**
 * int_print - prints an int
 * @args: var arg
 * @count: ptr to int to store the count of char printed
 */

void int_print(va_list args, int *count)
{
	int n, num;

	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		*count += 1;
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		int_print(args, count);
	}
	_putchar(num % 10 + '0');
	*count += 1;
}
