#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - function that prints formatted text like printf
 * @format: format string containing the specifiers
 *
 * Return: total number of printed characters
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
int i;

va_start(args, format);

for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == 's')
{
char *str = va_arg(args, char *);

while (*str)
{
putchar(*str);
count++;
str++;
}
}
else if (format[i] == 'c')
{
char c = va_arg(args, int);

putchar(c);
count++;
}
else if (format[i] == '%')
{
putchar('%');
count++;
}
else
{
putchar('%');
putchar(format[i]);
count += 2;
}
}
}
va_end(args);

return (count);
}

/**
 * main - Main function to test the _printf function
 *
 * Return: 0 on sucess
 */

 int main(void)
{
int count;

count = _printf("Hello %s, welcom to the %s class!\n", "Chris", "C");
printf("total number of printed characters: %d\n", count);

count = _printf("character: %c and percentage: %%\n", 'A');
printf("total number of printed characters: %d\n", count);

return (0);
}