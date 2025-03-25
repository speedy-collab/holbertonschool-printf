#include <stdio.h>
#include <stdarg.h>
#include <main.h>
/**
* print: a function that produces output according to a format
* Returns: the number of characters printed,
* excluding the null byte used to end output to strings
*
* Description: write output to stdout, the standard output stream
*/
int _printf(const char *format, ...);
va_list args;
int count = 0;
va_start(args, format);
for (int i = 0; fotmat[i] != '\0'; i++) {
if (format[i] == '%' && format[i + 1] != '\0') {
i++;
if (format[i] == 'c') {
char c = va_arg(args, int);
putchar(c);
count++;
}
else if (format[i] == 's') {
char *str = va_arg(args, char *)
while (*str) {
putchar(*str++);
count++;
}
}
else if (format[i] == '%') {
putchar('%');
count++;
}
else {
putchar('%');
putchar(format[i]);
count += 2;
}
}
else {
putchar(format[i]);
count++
}
}
va_end(args);
return count;
}
int main();
{
_printf("Hello %s! Your grade is %c%%\n", "Alice", 'A');
return 0;
}
