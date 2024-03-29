#include "main.h"
/**
 * print_last_digit - prints last digit
 * Description: prints last digit
 *
 * @d: an integer input
 *
 * Return: always 0
 */
int print_last_digit(int d)
{
	if (d < 0)
	{
		d = -1 * (d % 10);
		_putchar(d + '0');
		return (d);
	}
	else if (d > 0)
	{
		d %= 10;
		_putchar(d + '0');
		return (d);
	}
	else
	{
		_putchar(d + '0');
		return (0);
	}
}
