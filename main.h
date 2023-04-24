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
	void (*fmt_func_ptr)(va_list, int *);
} fmt;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_fmt(const char *format, va_list args, int *count, int *num_args);
void char_print(va_list args, int *count);
void string_print(va_list args, int *count);
void int_print(va_list args, int *count);
void dec_print(va_list args, int *count);

#endif /* MAIN_H */
