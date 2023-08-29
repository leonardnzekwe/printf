# C - PRINTF

Custom Implementation of C - Printf Function

## Team

- [@leonardnzekwe](https://github.com/leonardnzekwe)
- [@rahma-cloud](https://github.com/rahma-cloud)

## Tasks Roadmap

- [x] **Task 0:** Write a function that produces output according to a format.
    - Prototype: `int _printf(const char *format, ...);`
    - Returns: the number of characters printed (excluding the null byte used to end output to strings)
    - write output to stdout, the standard output stream
    - `format` is a character string. The format string is composed of zero or more directives.
    - You need to handle the `c, s , %` conversion specifiers.
- [x] **Task 1:** Handle the `d, i` conversion specifiers.
- [x] **Task 2:** Handle the `b` custom conversion specifiers. The unsigned int argument is converted to binary
- [x] **Task 3:** Handle the `u, o, x, X` conversion specifiers.
- [x] **Task 4:** Use a local buffer of 1024 chars in order to call write as little as possible.
- [x] **Task 5:** Handle the `S` custom conversion specifier. It prints the string. Non printable characters `(0 < ASCII value < 32 or >= 127)` are printed this way: **\x**, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
- [x] **Task 6:** Handle the `p` conversion specifier.
- [x] **Task 7:** Handle the `+, space, #` flag characters for non-custom conversion specifiers.
- [ ] **Task 8:** Handle the `l, h` length modifiers for non-custom conversion specifiers. Conversion specifiers to handle: `d, i, u, o, x, X`
- [ ] **Task 9:** Handle the field width for non-custom conversion specifiers.
- [ ] **Task 10:** Handle the precision for non-custom conversion specifiers.
- [ ] **Task 11:** Handle the 0 flag character for non-custom conversion specifiers.
- [ ] **Task 12:** Handle the `-` flag character for non-custom conversion specifiers.
- [ ] **Task 13:** Handle the `r` custom conversion specifier. It prints the reversed string
- [ ] **Task 14:** Handle the `R` custom conversion specifier. It prints the rot13'ed string
- [ ] **Task 15:** All the above options work well together.

## Files

- **main.h:** contains the prototypes, structure of functions and structs.
- **\_putchar.c:** contains `int _putchar(char c)` definition, for printing to standard output
- print_func: contains `int _printf(const char *format, ...)` definition, for calling `_printf` function. Also contains helper function to the `_printf` function:
    - `int print_fmt(const char *format, va_list args, int *count, int *num_args, fmt fmt_specs[], int fmt_len)`, for format checking
    - `bool handle_fmt_spec(char fmt_char, va_list args, int *count, int *num_args, fmt fmt_specs[], char *flag, char *space)`, for searching for the corresponding conversion specifier and matching it with the right `fmt_spec` array dimension.
- **bin_print.c:** contains `void bin_print(char __attribute__ ((unused)) flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for handling binary printing (base 2).
- **cap_hex_print.c:** contains `void cap_hex_print(char flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for handling hexadecimal uppercase printing (base 16).
- **char_print.c:** contains `void char_print(char __attribute__ ((unused)) flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for handling character printing.
- **hex_print.c:** contains `void hex_print(char flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for handling hexadecimal lowercase printing (base 16).
- **num_print.c:** contains `void dec_print(char flag, va_list args, int *count, char space)` && `void int_print(char flag, va_list args, int *count, char space)` definition, for handling integer and decimal (base 10) printing.
- **oct_print.c:** contains `void oct_print(char flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for handling unsigned integer printing in octal format (base 8).
- **ptr_print.c:** contains `void ptr_print(char __attribute__ ((unused)) flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for handling memory address printing in hexadecimal format. It has a helper function `void zero(char &nil, int *count)` for printing `nil` when `ptr` is 0.
- **str_hex_print.c:** contains `void str_hex_print(char __attribute__ ((unused)) flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for printing a string With non-printable characters as hexadecimal (uppercase).
- **string_print.c:** contains `void string_print(char __attribute__ ((unused)) flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for printing strings.
- **uint_print.c:** contains `void uint_print(char __attribute__ ((unused)) flag, va_list args, int *count, char __attribute__ ((unused)) space)` definition, for handling unsigned integer printing.

## Testing Directory

**test:** contains all the main.c files for testing each task, the main.c files are series of edge cases for each of the function specification handling for tasks 0 to task 7. Also contains the compiled executable from the tests for task 0  to task 7.

## Notes

- We may continue to refactor the `_printf` completed tasks to me more modularised. For example in the print_func.c file, which contains the format printing of the functions, which are helper functions to the  `_printf` functions. On the bid to be complaint to betty style for function, not been more than 40 lines. We had to factor out the part of the `print_fmt` function that uses an `index` of the `format` string to search and match valid format specifiers, before calling it's `fmt_specs` struct member `fmt_func_ptr` . After which we realised the code is more modular that way, we attempted to factor out, the part that checks for the flags, but our tests kept failing for some edge case. This flag checking refactoring it underway.
- Looking at the `print_fmt` function, it could be noticed that we had to give up the aesthestic look of the code to comply to betty style rule for characters on a line not been more than 80 line and again function not been more than 40 lines. We had to divide function declaration into two lines and move some curly brackets fot the `if` statements same line as the `if` body.
- Lastly, doing hard things is the right path to self developement, just as `task 7` states - _`The big print gives and the small print takes away`.
- We hope to pass _`Sarcasm is lost in print` and reach _`The flood of print has turned reading into a process of gulping rather than savoring`
- :)
