#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_specifier - format specifier structure
 * @fmt_sign: fomat sign parameter
 * @fmt_func_ptr: format function parameter
 */

typedef struct format_specifier
{
	char fmt_sign;
	void (*fmt_func_ptr)(va_list);
} fmt;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
void char_print(va_list c);
void string_print(va_list s);

#endif /* MAIN_H */
