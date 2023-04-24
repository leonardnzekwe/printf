#include "main.h"

/**
 * char_print - character printing
 * @c: int parameter to print
 * char is promoted to int when passed to elipses
 */

void char_print(va_list c)
{
	_putchar(va_arg(c, int));
}
