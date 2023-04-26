#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format_specifier - format specifier structure
 * @fmt_sign: fomat sign parameter
 * @fmt_func_ptr: format function parameter
 */

typedef struct format_specifier
{
	char fmt_sign;
	void (*fmt_func_ptr)(va_list, int *, char);
} fmt;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_fmt(const char *format, va_list args, int *count, int *num_args, fmt fmt_specs[]);
void char_print(va_list args, int *count, char flag);
void string_print(va_list args, int *count, char flag);
void int_print(va_list args, int *count, char flag);
void dec_print(va_list args, int *count, char flag);
void bin_print(va_list args, int *count, char flag);
void uint_print(va_list args, int *count, char flag);
void oct_print(va_list args, int *count, char flag);
void hex_print(va_list args, int *count, char flag);
void cap_hex_print(va_list args, int *count, char flag);
void str_hex_print(va_list args, int *count, char flag);
void ptr_print(va_list args, int *count, char flag);
void zero(char *nil, int *count);

#endif /* MAIN_H */
