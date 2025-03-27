#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int main(void);
int _putchar(char c);
int _printf(const char *format, ...);
int format_char(va_list args);
int format_decimal(va_list args);
int format_integer(va_list args);
int format_number(unsigned int value);
int format_percent(va_list args);
int format_string(va_list args);

#endif
