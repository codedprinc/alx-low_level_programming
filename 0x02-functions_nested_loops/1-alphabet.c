#include "main.h"
/**
 * print_alphabet - function
 * @void: no arg
 *
 * Return: returns a value - 0
 */

void print_alphabet(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		_putchar(az);
		az++;
	}

	_putchar('\n');
}
