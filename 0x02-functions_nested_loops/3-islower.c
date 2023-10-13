#include "main.h"
/**
 * _islower - detect lowercase and uppercase
 *
 * Description: use _putchar to print
 *
 * @c: collects alphabet
 *
 * Return: (1) if c is lower otherwise (0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
