#include "main.h"

/**
 * print_string - function to print a string
 * @args: number of arguments
 * Return: number of character
*/

int print_string(va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		_putchar('(');
		_putchar('N');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	if (string[i] == '\0')
		return (0);

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
