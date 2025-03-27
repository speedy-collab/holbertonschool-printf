#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - a simplified version of printf.
 * @format: the format string.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
const char *i;
va_start(args, format);
for (i = format; *i != '\0'; i++)
{
if (*i == '%' && (*(i + 1) == 'c' || *(i + 1) == 's' || *(i + 1) == '%' || *(i + 1) == 'd' || *(i) == 'i'))
{
i++;
if (*i == 'c')
{
char c = (char)va_arg(args, int);
write(1, &c, 1);
count++;
}
else if (*i == 's')
{
char *s = va_arg(args, char *);
if (s == NULL)
s = "(null)";
while (*s)
{
write(1, s, 1);
s++;
count++;
}
}
else if (*i == '%')
{
write(1, "%", 1);
count++;
}
if (*i == 'd' || *i == 'i')
{
count++;
}
}
else
{
write(1, i, 1);
count++;
}
}
va_end(args);
return (count);
}
