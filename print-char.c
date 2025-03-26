#include "main.h"

/**
 * print_char - Prints a character.
 * @args: A list of arguments containing the character to print.
 *
 * Return: The total number of digits printed.
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
