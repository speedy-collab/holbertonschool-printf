#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _printf - Prints anything based on the format provided.
* @format: A list of arguments passed to the function.
* Return: The total number of characters printed.
*/
int _printf(const char *format, ...)
{
va_list args;
unsigned int format_count = 0, lenght = 0, specifier_count;
int (*print_functions[])(va_list) = {
format_char, format_string, format_integer, format_percent};
char format_specifiers[] = {'c', 's', 'd', 'i', '%'};

if (format == NULL)
return (-1);
va_start(args, format);
while (format[format_count])
{
if (format[format_count] == '%')
{
format_count++;
if (format[format_count] == '\0')
{
return (-1); }
for (specifier_count = 0; specifier_count < 5; specifier_count++)
{
if (format[format_count] == format_specifiers[specifier_count])
{
lenght += print_functions[specifier_count](args);
break; }
}
if (specifier_count == 5)
{
_putchar('%');
_putchar(format[format_count]);
lenght += 2;
}
}
else
{
lenght += _putchar(format[format_count]);
}
format_count++;
}
va_end(args);
return (lenght);
}
