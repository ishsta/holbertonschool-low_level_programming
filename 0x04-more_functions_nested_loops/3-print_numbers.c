#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - print 0-9
 */

void print_numbers(void)
{
	char i = '0';

	for (i = '0'; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
