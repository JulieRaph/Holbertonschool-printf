#include "main.h"

/**
 * print_char - function to output a character
 * @args: arguments list
 * Return: return numbers of characters
*/

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
