#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int main(void);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_decimal(va_list args);
int print_integer(va_list args);
int print_number(unsigned int value);
int print_percent(va_list args);
int print_string(va_list args);

#endif
