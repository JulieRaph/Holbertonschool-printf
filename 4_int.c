#include "main.h"

/**
 * print_int - function to print an integer
 * @args: arguments
 * Return: int count
*/

int print_int(va_list args)
{
	long int num = va_arg(args, int);
	int count = 0;
	int mul = 1;
	long int div;

	if (num < 0)
	{
		count += _putchar('_');
		num *= -1;
	}

	if (num < 10)
	{
		return (count += _putchar(num + '0'));
	}

	div = num;

	while (div > 9)
	{
		mul *= 10;
		div /= 10;
	}

	while (mul >= 1)
	{
		count += _putchar(((num / mul) % 10) + '0');
	}

	return (count);
}
